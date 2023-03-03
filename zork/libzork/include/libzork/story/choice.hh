#pragma once

#include "libzork/story/node.hh"

namespace story
{
    class Choice
    {
        public:
            const Node& get_target() const;

        protected:
            Node target_;
    };
} //namespace story