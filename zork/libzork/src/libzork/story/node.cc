#include "libzork/story/node.hh"

#include <fstream>
#include <iostream>

namespace story
{
    Node::Node(const std::string& name, const fs::path& script_path)
        : script_path_(script_path)
        , name_(name)
    {
        std::ifstream file(script_path);

        std::string line;
        while (std::getline(file, line))
        {
            text_ += line;
            text_.push_back('\n');
        }
    }

    const std::string& Node::get_name() const
    {
        return name_;
    }

    const std::string& Node::get_text() const
    {
        return text_;
    }

    const Node* Node::make_choice(std::size_t index) const
    {
        if (index >= choices_.size())
            return nullptr;
        const Node* tmp;
        size_t i = 0;
        for (auto e = choices_.begin(); e != choices_.end(); e++)
        {
            if (i == index)
            {
                while ((*e).get_target() != nullptr)
                {
                    tmp = (*e).get_target();
                }
                return tmp;
            }
            i++;
        }
        return nullptr;
    }

    std::vector<std::string>
    Node::list_choices(bool check_conditions) const
    {
        std::vector<std::string> choice_texts;
        for (auto choice : choices_)
        {
            if (check_conditions)
                choice_texts.push_back(choice.get_text());
        }
        return choice_texts;
    }

    void Node::add_choice(const Node* other, const std::string& text,
                          const std::vector<Condition>& conditions,
                          const std::vector<Action>& operations)
    {
        (void) conditions;
        (void) operations;
        choices_.push_back(Choice(other, text));
    }

} // namespace story