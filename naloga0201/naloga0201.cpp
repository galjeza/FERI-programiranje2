#include <iostream>
#include "Artwork.h"

const Artwork *getMoreExpensive(Artwork *firstArtwork, Artwork *secondArtwork) {
    if (firstArtwork->getPrice() > secondArtwork->getPrice()) {
        return firstArtwork;
    }
    return secondArtwork;
}

int main() {
    Artwork artOne = Artwork();
    artOne.print();
    Artwork *artTwo = new Artwork("title", "description", 2022, 10.90);
    artTwo->print();
    Artwork *artThree = new Artwork(*artTwo);
    artThree->print();
    Artwork *artFour = new Artwork();
    artFour->setYear(2002);
    artFour->setTitle("New title");
    artFour->setPrice(14.99);
    artFour->setDescription("Nice artwork");
    Artwork *artFive = new Artwork(*artFour);
    std::string artInfo = artFour->toString();
    std::cout << artInfo << std::endl;
    std::cout << artFive->getTitle() << std::endl;
    std::cout << artFive->getYear() << std::endl;
    std::cout << artFive->getPrice() << std::endl;
    std::cout << artFive->getDescription() << std::endl;

    getMoreExpensive(artTwo, artFour)->print();
    std::cout << artFour->isMoreExpensive(artTwo) << std::endl;
    delete artTwo;
    delete artThree;
    delete artFour;
    delete artFive;
    return 0;
}
