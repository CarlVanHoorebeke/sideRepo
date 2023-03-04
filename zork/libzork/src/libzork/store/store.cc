#include "libzork/store/store.hh"

namespace story
{
    // Forward declaration because of the recursive dependencies
    // store.hh -> node.hh -> (action|condition).hh -> store.hh
    class Node;
} // namespace story

const story::Node* Store::get_active_node() const
{
    if (node_ != nullptr)
        return node_;
    return nullptr;
}

void Store::set_active_node(const story::Node* node)
{
    node_ = node;
}
