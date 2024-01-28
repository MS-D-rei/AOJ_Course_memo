#include <bitset>
#include <cstdint>
#include <iostream>
#include <vector>

namespace Cards {
enum Suit { Spades, Hearts, Clubs, Diamonds, MaxSuits };
}

Cards::Suit getSuit(char inputSuit) {
    Cards::Suit suit{};
    // char suit to Cards::Suit suit
    switch (inputSuit) {
    case 'S':
        suit = Cards::Spades;
        break;
    case 'H':
        suit = Cards::Hearts;
        break;
    case 'C':
        suit = Cards::Clubs;
        break;
    case 'D':
        suit = Cards::Diamonds;
        break;
    }

    return suit;
}

std::uint16_t getRank(int inputRank) {
    std::uint16_t rank{};
    // int rank to std::uint16_t rank
    switch (inputRank) {
    case 1:
        rank = 1 << 0;
        break;
    case 2:
        rank = 1 << 1;
        break;
    case 3:
        rank = 1 << 2;
        break;
    case 4:
        rank = 1 << 3;
        break;
    case 5:
        rank = 1 << 4;
        break;
    case 6:
        rank = 1 << 5;
        break;
    case 7:
        rank = 1 << 6;
        break;
    case 8:
        rank = 1 << 7;
        break;
    case 9:
        rank = 1 << 8;
        break;
    case 10:
        rank = 1 << 9;
        break;
    case 11:
        rank = 1 << 10;
        break;
    case 12:
        rank = 1 << 11;
        break;
    case 13:
        rank = 1 << 12;
        break;
    }

    return rank;
}

int main() {
    int cardNumber{};
    std::cin >> cardNumber;

    std::vector<std::bitset<13>> cards(Cards::MaxSuits);

    for (int index{0}; index < cardNumber; index++) {
        char inputSuit{};
        int inputRank{};

        std::cin >> inputSuit >> inputRank;

        Cards::Suit suit{getSuit(inputSuit)};

        std::uint16_t rank{getRank(inputRank)};

        cards[suit] |= rank;
    }

    for (int i{0}; i < Cards::MaxSuits; i++) {
    }

    return 0;
}
