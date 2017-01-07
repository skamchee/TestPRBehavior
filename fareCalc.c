#include<stdio.h>

double calculateAirfare(double baseFare) {

    double customsFee  = 5;
	double immigrationFee = 2;
	double federalTransportTax = .025;  

	double fare = baseFare;              
    fare += immigrationFee;
    fare *= (1 + federalTransportTax);
    return fare;
}

int main(int argc, char **argv){
	double baseFare = 10;
	printf("%f\n",calculateAirfare(baseFare));
}

