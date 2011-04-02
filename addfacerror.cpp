#include "addfacerror.h"
#include "ui_addfacerror.h"

AddFacError::AddFacError() :
    ui(new Ui::AddFacError)
{
    ui->setupUi(this);

    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(okBtn_clicked()));

    QImage warning("warning.jpg");
    setScheme();

}

AddFacError::~AddFacError(){delete ui;}

void AddFacError::okBtn_clicked(){this->close();}
