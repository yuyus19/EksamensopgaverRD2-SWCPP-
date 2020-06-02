#include "Ticket.h"
#include <string>


Ticket::Ticket()
{
    mTheater = 0;
    mTicketNo = 0;
    mPrice = 0;
    mSeat = nullptr;
    mMovie = nullptr;
    m3D = false;

    for(int i = 0; i < 11; i++){
        mDate[i]= '\0';
        mTime[i]= '\0';
    }




}

Ticket::Ticket(int theater, int ticketNo, double price, const char* date, const char* time, const char* seat, const char* movie, bool a3D)
{
    mTheater = theater;
    mTicketNo = ticketNo;
    mPrice = price;
    for(int i = 0; i < 11; i++){
         mDate[i] = date[i];
    }

    for(int j = 0; j < 6; j++){
        mTime[j] = time[j];
    }

    int size = 0;
    while(mSeat[size] != '\0'){
        size++;
    }
    char *tmp = new char[size];
    for(int k = 0; k < size; k++){
        tmp[k] = seat[k];
    }
    mSeat = tmp;

    size = 0;
    while(mMovie[size] != '\0'){
        size++;
    }

    tmp = new char[size];
    for(int l = 0; l < size; l++){
        tmp[l] = movie[l];
    }
    mMovie = tmp;
    m3D = a3D;

}


Ticket::Ticket(const Ticket& h):Ticket()
{
    setTheater(h.mTheater);
    setTicketNo(h.mTicketNo);
    setPrice(h.mPrice);
    setDate(h.mDate);
    setTime(h.mTime);
    setSeat(h.mSeat);
    setMovie(h.mMovie);
    setM3D(h.m3D);
}



Ticket::Ticket(Ticket&& h):Ticket()
{
    mTheater = std::move(h.mTheater);
    mTicketNo = std::move(h.mTicketNo);
    mPrice = std::move(h.mPrice);
    for(unsigned int i = 0; h.getDate()[i] != '\0';i++){
        mDate[i] = std::move(h.mDate[i]);
    }
    for(unsigned int i = 0; h.getTime()[i] != '\0'; i++){
        mTime[i] = std::move(h.getTime()[i]);
    }
    mSeat = std::move(h.mSeat);
    mMovie = std::move(h.mMovie);
    m3D = std::move(h.m3D);


}

Ticket & Ticket::operator=(const Ticket &h){
    setTheater(h.getTheater());
    setTicketNo((h.getTicketNo()));
    setPrice(h.getPrice());
    setDate(h.getDate());
    setTime(h.getTime());
    setSeat(h.getSeat());
    setMovie(h.getMovie());
    setM3D(h.getM3D());

    return *this;
}

Ticket &Ticket::operator=(Ticket &&h){
    mTheater = std::move(h.mTheater);
    mTicketNo = std::move(h.mTicketNo);
    mPrice = std::move(h.mPrice);
    for(unsigned int i = 0; h.getDate()[i] != '\0';i++){
        mDate[i] = std::move(h.mDate[i]);
    }
    for(unsigned int i = 0; h.getTime()[i] != '\0'; i++){
        mTime[i] = std::move(h.getTime()[i]);
    }
    mSeat = std::move(h.mSeat);
    mMovie = std::move(h.mMovie);
    m3D = std::move(h.m3D);

    return *this;
}






