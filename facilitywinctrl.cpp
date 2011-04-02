#include "facilitywinctrl.h"

FacilityWinCtrl* FacilityWinCtrl::anInstance = NULL;

FacilityWinCtrl::FacilityWinCtrl()
{
}

FacilityWinCtrl* FacilityWinCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new FacilityWinCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

void FacilityWinCtrl::goToWaiting(){

    waitingWin = new WaitingListWindow();
    waitingWin->show();

    genCTRL::center(*waitingWin);
}
