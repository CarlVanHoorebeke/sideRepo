#include "libzork/story/story.hh"

#include "yaml-cpp/yaml.h"

namespace story
{
    Story::Story(const fs::path& path)
    : current_node_(nodes_.at(0).get())
    {
        

        YAML::Node config = YAML::LoadFile(path);

        title_ = config["title"].as<std::string>();
        scripts_path_ = config["scripts-path"].as<std::string>();
        
        std::map<std::string, Node*> map;

        auto stories = config["story"];

        for (const auto& el_stories : stories)
        {
            // auto el_stories_lhs = el_stories.first.as<std::string>();

            Node n(stories["name"].as<std::string>(),
                   stories["script"].as<std::string>());
            map.insert({stories["name"].as<std::string>(), &n});
        }

        auto choices = stories["choices"];

        for (const auto& el_stories_choices : choices)
        {
            // auto el_stories_lhs = el_stories.first.as<std::string>();
            auto n = map.find(choices["target"].as<std::string>())->second;
            n->add_choice(map.find(choices["target"].as<std::string>())->second,
                          choices["text"].as<std::string>());
        }

        for (auto i = map.begin(); i != map.end(); i++)
        {
            nodes_.push_back(std::make_unique<Node>(*i->second));
        }

    }

    const std::string& Story::get_title() const
    {
        return title_;
    }

    const Node* Story::get_current() const
    {
        return current_node_;
    }
    void Story::set_current(const Node* node)
    {
        current_node_ = node;
        //std::unique_ptr<story::Node> new_node = std::move(nodes_.at(0));
        //nodes_.at(0).reset(new story::Node(*node));
        //nodes_.at(0).reset(node);
    }

    std::ostream& operator<<(std::ostream& os, const Story& story)
    {
        os << "diagraph story {\n";
        for (const auto& i : story.nodes_)
        {
            os << "\t\""<< i.get()->get_name() << "\" -> ";
            if (i.get()->list_choices().size() == 1)
            {
                os << "\"" << i.get()->list_choices().at(0) << "\";";
            }
            else
            {
                os << "{\"" << i.get()->list_choices().at(0) << "\"";
                for (auto j : i.get()->list_choices())
                {
                    os << " \"" << j << "\""; 
                }
                os << "};";
            }
        }
        os << "}\n";
        return os;
    }

}