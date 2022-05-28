#include <iostream>
#include "Gallery.h"
#include "Artwork.h"
#include "Artist.h"
int main() {
    Gallery gallery("Victoria miro");

    Artist * vanGogh= new Artist("Vincent Van Gogh","Artists from Netherlands, died on 29 july 1890",Date(30,5,1853));
    Artwork *  starryNight= new Artwork("The Starry Night","Picture of a night",1999,99.10,vanGogh);

    Artist * daVinci= new Artist("Leonardo da Vinci","Italian painter and engeener.",Date(15,4,1452));
    Artwork * monaLisa = new Artwork("Mona Lisa","One of the most famous paintings in the world",1503,9999.10,daVinci);
    Artwork * lastSupper = new Artwork("The Last Supper","Last Supper, also called Lord's Supper, in the New Testament, the final meal shared by Jesus and his disciples in an upper room in Jerusalem, the occasion of the institution of the Eucharist.",1398,239839.10,daVinci);

    Artist * picasso= new Artist("Pablo Picasso","Born in Malaga,Spain",Date(25,10,1881));
    Artwork * guernica = new Artwork("Guernica","Abstract painting",1937,130000.00,picasso);
    Artwork * lareve = new Artwork("La Reve","Painting of a woman",1932,2500.00,picasso);

    gallery.addArtworks(starryNight);
    gallery.addArtworks(monaLisa);
    gallery.addArtworks(lastSupper);
    gallery.addArtworks(guernica);
    gallery.addArtworks(lareve);
    gallery.printArtworks();

    gallery.removeArtwork(starryNight);
    std::string galleryString = gallery.toString();
    std::cout<<gallery.toString()<<std::endl;

    std::vector<Artwork*> artworksBetweenYear = gallery.getArtworksBetweenYear(1900,2000);
    std::cout<<"Artworks between years: 1900  and 2000:"<<std::endl;
    for(int i=0;i<artworksBetweenYear.size();i++){
        std::cout<<artworksBetweenYear[i]->getTitle()<<std::endl;
    }

    delete vanGogh;
    delete starryNight;
    delete daVinci;
    delete monaLisa;
    delete lastSupper;
    delete picasso;
    delete guernica;
    delete lareve;

    return 0;
}
