#include "datahandler.h"
#include <QDebug>


QString DATAHANDLER::windDirection(int degrees){

    if(degrees <= 11.25) return "Северный";
    else if( degrees <= 33.75) return "Северо-северо-восток";
    else if( degrees <= 56.25) return "Северо-восток";
    else if( degrees <= 78.75) return "Восток-северо-восток";
    else if( degrees <= 101.25) return "Восточный";
    else if( degrees <= 123.75) return "Восток-юго-восток";
    else if( degrees <= 146.25) return "Юго-восток";
    else if( degrees <= 168.75) return "Юго-юго-восток";
    else if( degrees <= 191.25) return "Южный";
    else if( degrees <= 213.75) return "Юго-юго-запад";
    else if( degrees <= 236.25) return "Юго-запад";
    else if( degrees <= 258.75) return "Запад-юго-запад";
    else if( degrees <= 281.25) return "Западный";
    else if( degrees <= 303.75) return "Запад-северо-запад";
    else if( degrees <= 326.25) return "Северо-запад";
    else if( degrees <= 348.75) return "Северо-северо-запад";
    else if( degrees <= 360) return "Северный";
    else return "Нет данных";

}




