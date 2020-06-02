#ifndef TICKET_H
#define TICKET_H
#include <array>
#include <stdio.h>
#include <string.h>
#include <iostream>

class Ticket {
public:
    //Constructor
    Ticket();

   // ~Ticket(){}


    Ticket(int theater, int ticketNo, double price, const char* date, const char* time, const char* seat, const char* movie, bool a3D);


    //Move og copy constructor
    Ticket (const Ticket& h);
    Ticket (Ticket&& h);

    //Move og copy assignment
    Ticket& operator=(const Ticket & h);
    Ticket& operator=(Ticket&& h);



    //Getters og setters for memember variabler
    int getTheater() const{return mTheater;}
    void setTheater(int theater){mTheater = theater;}

    int getTicketNo() const{return mTicketNo;}
    void setTicketNo(int ticketNo){mTicketNo = ticketNo;}

    double getPrice() const{return mPrice;}
    void setPrice(double price){mPrice = price;}

    char const *getDate()const{return mDate;}
    void setDate(const char *date){
       for(int i = 0; i < 11; i++){
           mDate[i]=date[i];
       }
    }

    char const *getTime()const{return mTime;}
    void setTime(const char *time){
    for(int i = 0; i <6; i++){
        mTime[i] = time[i];
    }
    }

     char *getSeat() const{if(mSeat != nullptr){
             return mSeat;
         }else{return " ";}
                          }
    void setSeat(char *seat){mSeat = seat;}

    char *getMovie() const{return mMovie;}
    void setMovie(char *movie){mMovie = movie;}

    bool getM3D() const{return m3D;}
    void setM3D(bool value){m3D = value;}

private:
 int mTheater;
 int mTicketNo;
 double mPrice;
 char mDate[11];
 char mTime[6];
 char* mSeat;
 char* mMovie;
 bool m3D;
};

#endif
