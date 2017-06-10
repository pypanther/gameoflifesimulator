#ifndef CELL_H
#define CELL_H

#include <QWidget>
#include <QPaintEvent>

class Cell : public QWidget {
    Q_OBJECT

public:
    Cell(QWidget* parent                   = 0,
         int initialWidth                  = 30,
         int initialHeight                 = 30,
         QColor initialOutlineColor        = Qt::black,
         QColor initialBackgroundColor     = Qt::white);

private:
    void paintEvent(QPaintEvent* event);
    int getWidth() const;
    int getHeight() const;

    int width;
    int height;
    QColor outlineColor;
    QColor backgroundColor;
};

#endif //  end header guard
