#include <iostream>
#include "Gallery.h"
#include "Artwork.h"
#include "Artist.h"
#include "Painting.h"
#include "Sculpture.h"

bool isRenaissanceArt(Artwork* a){
    return (a->getYear()<=1600 && a->getYear()>=1400);
}

bool isExpensive(Artwork* a){
    return a->getPrice()>1000;
}

int main() {
    Gallery gallery("Victoria miro");

    Artist * vanGogh= new Artist("Vincent Van Gogh","Artists from Netherlands, died on 29 july 1890",Date(30,5,1853));
    Artwork*  starryNight= new Painting(PaintingTechnique::Oil,"The Starry Night","Picture of a night",1999,99.10,vanGogh);
    Artwork * sculpture = new Sculpture("David","Nice sculpture",1982,123.2,vanGogh,123.21,Material::Clay);
    Artist * daVinci= new Artist("Leonardo da Vinci","Italian painter and engeener.",Date(15,4,1452));
    Artwork * monaLisa = new Painting(PaintingTechnique::Acrylic,"Mona Lisa","One of the most famous paintings in the world",1503,9999.10,daVinci);
    Artist * picasso= new Artist("Pablo Picasso","Born in Malaga,Spain",Date(25,10,1881));
    Artwork * lareve = new Painting(PaintingTechnique::Oil,"La Reve","Painting of a woman",1932,2500.00,picasso);
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

    std::cout << gallery.find(isRenaissanceArt)->toString();

    std::cout<<"\n Print if painting: \n";
    PrintIfPainting paint;
    gallery.printArtworks(paint);

    std::vector<Artwork *> expensiveArt = gallery.findAll(isExpensive);
    std::cout<<"Expensive art:"<<std::endl;
    for (auto & i : expensiveArt){
        i->print();
        std::cout<<"\n";
    }






    delete vanGogh;
    delete starryNight;
    delete daVinci;
    delete monaLisa;
    delete picasso;
    delete lareve;
    delete sculpture;

    return 0;
}
