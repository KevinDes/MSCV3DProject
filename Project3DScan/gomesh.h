#ifndef GOMESH_H
#define GOMESH_H

#include <QWidget>
#include "finalresult.h"

namespace Ui {
class gomesh;
}

class gomesh : public QWidget
{
    Q_OBJECT
public:
    explicit gomesh(QWidget *parent = 0);
    ~gomesh();

private:
    Ui::gomesh *ui;

signals:

public slots:
};

#endif // GOMESH_H
