#pragma once

#include <filesystem>
#include <string>
#include <vector>

#include "libzork/variables/action.hh"
#include "libzork/variables/condition.hh"
#include "libzork/story/choice.hh"

namespace fs = std::filesystem;

namespace story
{
    class Node
    {
    public:
        Node(const std::string& name, const fs::path& script_path);

        const std::string& get_name() const;
        const std::string& get_text() const;

        const Node* make_choice(std::size_t index) const;
        std::vector<std::string>
        list_choices(bool check_conditions = true) const;
        void add_choice(const Node* other, const std::string& text,
                        const std::vector<Condition>& conditions = {},
                        const std::vector<Action>& operations = {});

    private:
        std::string name_;
        std::string text_;
        fs::path script_path;
        std::vector<Choice> choices_;
    };
} // namespace story
