#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QMainWindow>

class QMenuBar;
class QStatusBar;
class QTreeWidget;

// This is the declaration of our MainWidget class
// The definition/implementation is in mainui.cpp
class MainWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWidget(); //Constructor
    ~MainWidget(); // Destructor

private:
   QMenuBar* menu_;
   QStatusBar* status_bar_;
   QTreeWidget* tree_;
};

#endif // MAINWIDGET_H

