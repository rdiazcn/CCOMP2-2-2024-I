#include <iostream>
#include "date.h"

using namespace std;

int main(){
    Date datei (3,1,2020);
    Date dateii (15,14,2019);
    Date dateiii (20,12,1500);

    datei.isLeapYear();

    datei.isDayTrue();
    