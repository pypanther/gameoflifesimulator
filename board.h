#ifndef BOARD_H
#define BOARD_H

#include "cell.h"

#include <QWidget>
#include <QList>
#include <QGridLayout>
#include <QPaintEvent>

typedef QList< QList<Cell*> > Grid;

class Board : public QWidget {
    Q_OBJECT
public:
    Board(QWidget* parent                = 0,
          int initialHorizontalCellCount = 5,
          int initialVerticalCellCount   = 4,
          int initialVerticalCellSize    = 30,
          int initialHorizontalCellSize  = 30);
    ~Board();

    int getHorizontalSize() const;
    int getVerticalSize() const;
    void setHorizontalSize(int newSize);
    void setVerticalSize(int newSize);
    int getHorizontalCellSize() const;
    int getVerticalCellSize() const;

private:
    void paintEvent(QPaintEvent* event);

    QGridLayout gridLayout;
    Grid cellGrid;
    int horizontalCellCount;
    int verticalCellCount;
    int horizontalCellSize;
    int verticalCellSize;
};

#endif //  end header guard

