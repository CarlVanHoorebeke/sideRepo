#include "auction.hh"
#include "nft.hh"

Auction::Auction(Person& organizer, NFT nft, uint initial_bid)
:organizer_(organizer)
,highest_bidder_(&organizer)
,highest_bid_(initial_bid)
{
    if (nft == nullptr)
        throw std::invalid_argument("NFT is empty");
    organizer_.remove_nft(*nft);
    nft_ = std::move(nft);
}

bool Auction::bid(Person& person, uint money)
{
    if (money > highest_bid_ && money <= person.get_money())
    {
        if (highest_bidder_ != &organizer_)
            highest_bidder_->add_money(highest_bid_);
        person.remove_money(money);
        highest_bid_= money;
        highest_bidder_ = &person;
        return true;
    }
    return false;
}

std::string Auction::get_nft_name() const
{
    return *nft_;
}

uint Auction::get_highest_bid() const
{
    return highest_bid_;
}

Auction::~Auction()
{
    if (highest_bidder_ == &organizer_)
    {
        organizer_.add_nft(std::move(nft_));
    }
    else {
        organizer_.add_money(highest_bid_);
        highest_bidder_->add_nft(std::move(nft_));
    }
}


