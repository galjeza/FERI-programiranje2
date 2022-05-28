#include <iostream>
#include "Gallery.h"
#include "Artwork.h"
#include "Artist.h"
#include "Painting.h"
#include "Sculpture.h"
#include "ComboDevice.h"

bool isRenaissanceArt(std::shared_ptr<Artwork> a) {
    return (a->getYear() <= 1600 && a->getYear() >= 1400);
}

bool ascendingYear(std::shared_ptr<Artwork> i, std::shared_ptr<Artwork> j) {
    return i->getYear() <= j->getYear();
}

bool descendingYear(std::shared_ptr<Artwork> i, std::shared_ptr<Artwork> j) {
    return i->getYear() >= j->getYear();
}

bool ascendingPrice(std::shared_ptr<Artwork> i, std::shared_ptr<Artwork> j) {
    return i->getPrice() <= j->getPrice();
}

bool isOlderThan2000(std::shared_ptr<Artwork> a) {
    return a->getYear() < 2000;
}

int main() {
    Gallery gallery("Victoria miro");

    std::shared_ptr<Artist> vanGogh = std::make_shared<Artist>("Vincent Van Gogh",
                                                               "Artists from Netherlands, died on 29 july 1890",
                                                               Date(30, 5, 1853));
    std::shared_ptr<Artwork> sculpture = std::make_shared<Sculpture>("David", "Nice sculpture", 1982, 123.2, vanGogh,
                                                                     123.21, Material::Clay);

    std::shared_ptr<Artwork> starryNight = std::make_shared<Painting>(PaintingTechnique::Oil, "The Starry Night",
                                                                      "Picture of a night", 2008, 1087.10, vanGogh);
    std::shared_ptr<Artist> daVinci = std::make_shared<Artist>("Leonardo da Vinci", "Italian painter and engeener.",
                                                               Date(15, 4, 1452));
    std::shared_ptr<Artwork> monaLisa = std::make_shared<Painting>(PaintingTechnique::Acrylic, "Mona Lisa",
                                                                   "One of the most famous paintings in the world",
                                                                   1503, 9999.10, daVinci);
    std::shared_ptr<Artist> picasso = std::make_shared<Artist>("Pablo Picasso", "Born in Malaga,Spain",
                                                               Date(25, 10, 1881));
    std::shared_ptr<Artwork> lareve = std::make_shared<Painting>(PaintingTechnique::Oil, "La Reve",
                                                                 "Painting of a woman", 2002, 88.00, picasso);
    gallery.addArtworks(starryNight);
    gallery.addArtworks(monaLisa);
    gallery.addArtworks(lareve);
    gallery.addArtworks(sculpture);


    gallery.sort(ascendingYear);
    std::cout << gallery.toString() << std::endl;
    gallery.sort(descendingYear);
    std::cout << gallery.toString() << std::endl;
    gallery.sort(ascendingPrice);
    std::cout << gallery.toString() << std::endl;
    std::cout<<"isRenaissanceArt: \n";
    std::cout << gallery.find(isRenaissanceArt)->toString();

    std::cout << "\n Print if painting: \n";
    PrintIfPainting paint;
    gallery.printArtworks(paint);


    std::cout << "Filter out > 2000" << std::endl;
    gallery.filterOut(isOlderThan2000);
    gallery.printArtworks();
    gallery.filterOut([](std::shared_ptr<Artwork> j) {
        return j->getPrice() < 100;
    });
    std::cout << "Delete every artwork which costs less tha 100" << std::endl;
    gallery.printArtworks();
    ComboDevice scannerCopier(10, 600);
    scannerCopier.print();


    return 0;
}
