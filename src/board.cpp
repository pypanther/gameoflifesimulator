#include "board.h"

#include <QtCore>
#include <QPainter>
#include <QPen>
#include <QSpacerItem>
#include <QSizePolicy>

#include <QDebug>

Board::Board(QWidget* parent,
             int initialHorizontalCellCount,
             int initialVerticalCellCount,
             int initialHorizontalCellSize,
             int initialVerticalCellSize)
    : QWidget(parent)
    , gridLayout(this)
    , horizontalCellCount(initialHorizontalCellCount)
    , verticalCellCount(initialVerticalCellCount)
    , horizontalCellSize(initialHorizontalCellSize)
    , verticalCellSize(initialVerticalCellSize)
{
    int width = getHorizontalSize() * getHorizontalCellSize();
    int height = getVerticalSize() * getVerticalCellSize();
    this->resize(width, height); 

    gridLayout.setSpacing(0);
    gridLayout.setContentsMargins(0, 0, 0, 0);

    for (int i = 0; i < getVerticalSize(); ++i) {
        cellGrid << QList<Cell*>();
        for (int j = 0; j < getHorizontalSize(); ++j) {
            cellGrid[i] << (new Cell(this));
            gridLayout.addWidget(cellGrid.at(i).at(j), i, j);
        }
    }

    setLayout(&gridLayout);

    this->update();
}

Board::~Board()
{
    // Delete all cells in list of lists of pointers to cells
    QList< QList<Cell*> >::iterator row =
        cellGrid.begin();
    for (; row != cellGrid.end(); ++row) {

        QList<Cell*>::iterator cell =
            row->begin();
        for (; cell != row->end(); ++cell) {
            delete (*cell);
            row->removeFirst();
        }

        cellGrid.removeFirst();
    }
}

int Board::getHorizontalSize() const
{
    return horizontalCellCount;
}

int Board::getVerticalSize() const
{
    return verticalCellCount;
}

void Board::setHorizontalSize(int newSize)
{
    horizontalCellCount = newSize;
}

void Board::setVerticalSize(int newSize)
{
    verticalCellCount = newSize;
}

int Board::getHorizontalCellSize() const
{
    return horizontalCellSize;
}

int Board::getVerticalCellSize() const
{
    return verticalCellSize;
}

void Board::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event)

    QPainter painter(this);    
    painter.drawRect(0, 0, width(), height());
}
