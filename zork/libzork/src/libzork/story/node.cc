#include "libzork/story/node.hh"

namespace story
{
    Node::Node(const std::string& name, const fs::path& script_path)
    : name_(name)
    , script_path(script_path)
    {}

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
        int i = 0;
        for (auto e = choices_.begin(); e != choices_.end(); e++)
        {
            if (i == index)
                return &e.base()->get_target();
            i++;
        }
    }

    std::vector<std::string> 
        Node::list_choices(bool check_conditions = true) const
    {

    }

    void Node::add_choice(const Node* other, const std::string& text,
                        const std::vector<Condition>& conditions = {},
                        const std::vector<Action>& operations = {})
    {

    }

}