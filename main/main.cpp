
#include <iostream>
#include "Start.h"
#include "FaceReconition.hpp"

using namespace std;

int main(){
	
	Start start;
	cout << "print this is main file "<< endl;
	start.init();


        FaceReconition fr;
        fr.startToReconition();

	return 0;
}
