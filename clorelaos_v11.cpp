#include "clorelaos_v11.h"
#include "ui_clorelaos_v11.h"

ClorelaOs_v11::ClorelaOs_v11(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClorelaOs_v11)
{
    ui->setupUi(this);
}

ClorelaOs_v11::~ClorelaOs_v11()
{
    delete ui;
}

