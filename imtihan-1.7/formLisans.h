#ifndef FORMLISANS_H
#define FORMLISANS_H
#include "ui_f_lisans.h"
class formLisans:public QWidget , public Ui::Lisans
{
        Q_OBJECT

public:
        formLisans(QWidget *parent):QWidget(parent) {
                setupUi(this);

        }
};
#endif // FORMLISANS_H
