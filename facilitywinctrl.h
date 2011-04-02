#ifndef FACILITYWINCTRL_H
#define FACILITYWINCTRL_H

#include "genctrl.h"
#include "waitinglistwindow.h"

class FacilityWinCtrl: public genCTRL
{
public:

    static FacilityWinCtrl* getInstance();
    void goToWaiting();

private:
    FacilityWinCtrl();
    static FacilityWinCtrl* anInstance;

    WaitingListWindow *waitingWin;

};

#endif // FACILITYWINCTRL_H
