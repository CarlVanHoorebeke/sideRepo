#include "libzork/story/story.hh"

#include "yaml-cpp/yaml.h"

namespace story
{
    explicit Story::Story(const fs::path& path)
    {
        YAML::Node config = YAML::LoadFile(path);

        title_ = config["title"].as<std::string>();
        scripts_path_ = config["scripts-path"].as<std::string>();
        
        std::map<std::string, Node> map;

        auto key = config["story"];

        for (const auto& el : key)
        {
            auto tmp = el.first.as<std::string>();

            Node n(key[tmp]["name"].as<std::string>(), key[tmp]["script"].as<fs::path>());

            for (const auto& e : el)
            {
                Choice c()
            }
            n.add_choice

            map.insert({key[tmp]["name"].as<std::string>(), n})



            data.jobs.push_back(Job(job, stage.as<std::string>()));
            auto command = config[job]["script"];
        }

    }

    const std::string& Story::get_title() const
    {
        return title_;
    }

    const Node* Story::get_current() const;
    void Story::set_current(const Node* node);


}