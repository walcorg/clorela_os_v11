#ifndef CLORELAOS_V11_H
#define CLORELAOS_V11_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ClorelaOs_v11; }
QT_END_NAMESPACE

class ClorelaOs_v11 : public QMainWindow
{
    Q_OBJECT

public:
    ClorelaOs_v11(QWidget *parent = nullptr);
    ~ClorelaOs_v11();

private:
    Ui::ClorelaOs_v11 *ui;
};
#endif // CLORELAOS_V11_H
