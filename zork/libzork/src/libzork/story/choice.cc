#include "libzork/story/choice.hh"

namespace story
{
    Choice::Choice(const Node* target, const std::string& text)
        : target_(target)
        , text_(text)
    {}

    const Node* Choice::get_target() const
    {
        return target_;
    }
    const std::string& Choice::get_name() const
    {
        return name_;
    }
    const std::string& Choice::get_text() const
    {
        return text_;
    }
} // namespace story