#pragma once

#include "nft.hh"

#include <cstddef>
#include <iostream>
#include <memory>

inline NFT create_nft(const std::string& name)
{
    return make_unique<std::string>(name);
}

inline NFT create_empty_nft()
{
    return nullptr;
}
