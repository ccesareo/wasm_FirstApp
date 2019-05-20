#include <QtWidgets>
#include "mainui.h"

// Constructor for main widget
MainWidget :: MainWidget() : QMainWindow()
{
   setWindowTitle(tr("Menu Title"));

   menu_ = new QMenuBar();
   menu_->addMenu(tr("File"));
   menu_->addMenu(tr("Edit"));
   setMenuBar(menu_);

   tree_ = new QTreeWidget();
   for (int i=0; i<100000; i++)
   {
	   QTreeWidgetItem *item = new QTreeWidgetItem();
	   tree_->addTopLevelItem(item);
   }
   setCentralWidget(tree_);

   status_bar_ = new QStatusBar();
   setStatusBar(status_bar_);
}

// Destructor
MainWidget::~MainWidget()
{
   delete status_bar_;
   delete menu_;
   delete tree_;
}

