/********************************************************************************
** Form generated from reading UI file 'ViewerGui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWERGUI_H
#define UI_VIEWERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewerGuiClass
{
public:
    QAction *actionOpen_file;
    QAction *actionSave_file;
    QAction *actionExit;
    QAction *actionPointcloud;
    QAction *actionOctree_cells;
    QAction *actionOctree_structure;
    QAction *actionTrajectory;
    QAction *actionAxes;
    QAction *actionHideBackground;
    QAction *actionSwitchRenderMode;
    QAction *actionClear;
    QAction *actionFree;
    QAction *savecampose;
    QAction *loadcampose;
    QAction *actionHelp;
    QAction *actionSettings;
    QAction *actionReset_view;
    QAction *actionTest;
    QAction *actionPrune_tree;
    QAction *actionConvert_ml_tree;
    QAction *actionPrintout_mode;
    QAction *actionSemanticColoring;
    QAction *actionOpen_graph_incremental;
    QAction *actionExport_view;
    QAction *actionStore_camera;
    QAction *actionRestore_camera;
    QAction *actionHeight_map;
    QAction *action_bg_black;
    QAction *action_bg_white;
    QAction *action_bg_gray;
    QAction *actionChanged_free_only;
    QAction *actionExpand_tree;
    QAction *actionReload_Octree;
    QAction *actionFollow_Mode;
    QAction *actionExport_sequence;
    QAction *actionSelected;
    QAction *actionSelection_box;
    QAction *actionClear_selection;
    QAction *actionFill_selection;
    QAction *actionClear_nodes_in_selection;
    QAction *actionFill_nodes_in_selection;
    QAction *actionDelete_nodes_in_selection;
    QAction *actionDelete_nodes_outside_of_selection;
    QAction *actionClear_unknown_in_selection;
    QAction *actionFill_unknown_in_selection;
    QAction *actionAlternateRendering;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuShow;
    QMenu *menuView;
    QMenu *menuView_mode;
    QMenu *menuBackground_color;
    QMenu *menuInteract;
    QMenu *menuDelete_nodes;
    QMenu *menuFill_selection;
    QMenu *menuChange_nodes_in_selection;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewerGuiClass)
    {
        if (ViewerGuiClass->objectName().isEmpty())
            ViewerGuiClass->setObjectName(QString::fromUtf8("ViewerGuiClass"));
        ViewerGuiClass->resize(1000, 700);
        actionOpen_file = new QAction(ViewerGuiClass);
        actionOpen_file->setObjectName(QString::fromUtf8("actionOpen_file"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_file->setIcon(icon);
        actionSave_file = new QAction(ViewerGuiClass);
        actionSave_file->setObjectName(QString::fromUtf8("actionSave_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_file->setIcon(icon1);
        actionExit = new QAction(ViewerGuiClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionPointcloud = new QAction(ViewerGuiClass);
        actionPointcloud->setObjectName(QString::fromUtf8("actionPointcloud"));
        actionPointcloud->setCheckable(true);
        actionPointcloud->setChecked(true);
        actionOctree_cells = new QAction(ViewerGuiClass);
        actionOctree_cells->setObjectName(QString::fromUtf8("actionOctree_cells"));
        actionOctree_cells->setCheckable(true);
        actionOctree_cells->setChecked(true);
        actionOctree_structure = new QAction(ViewerGuiClass);
        actionOctree_structure->setObjectName(QString::fromUtf8("actionOctree_structure"));
        actionOctree_structure->setCheckable(true);
        actionTrajectory = new QAction(ViewerGuiClass);
        actionTrajectory->setObjectName(QString::fromUtf8("actionTrajectory"));
        actionTrajectory->setCheckable(true);
        actionAxes = new QAction(ViewerGuiClass);
        actionAxes->setObjectName(QString::fromUtf8("actionAxes"));
        actionAxes->setCheckable(true);
        actionHideBackground = new QAction(ViewerGuiClass);
        actionHideBackground->setObjectName(QString::fromUtf8("actionHideBackground"));
        actionHideBackground->setCheckable(true);
        actionSwitchRenderMode = new QAction(ViewerGuiClass);
        actionSwitchRenderMode->setObjectName(QString::fromUtf8("actionSwitchRenderMode"));
        actionSwitchRenderMode->setCheckable(false);
        actionClear = new QAction(ViewerGuiClass);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionFree = new QAction(ViewerGuiClass);
        actionFree->setObjectName(QString::fromUtf8("actionFree"));
        actionFree->setCheckable(true);
        savecampose = new QAction(ViewerGuiClass);
        savecampose->setObjectName(QString::fromUtf8("savecampose"));
        loadcampose = new QAction(ViewerGuiClass);
        loadcampose->setObjectName(QString::fromUtf8("loadcampose"));
        actionHelp = new QAction(ViewerGuiClass);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/help-contents.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        actionSettings = new QAction(ViewerGuiClass);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon4);
        actionReset_view = new QAction(ViewerGuiClass);
        actionReset_view->setObjectName(QString::fromUtf8("actionReset_view"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset_view->setIcon(icon5);
        actionTest = new QAction(ViewerGuiClass);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        actionPrune_tree = new QAction(ViewerGuiClass);
        actionPrune_tree->setObjectName(QString::fromUtf8("actionPrune_tree"));
        actionPrune_tree->setChecked(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/go-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrune_tree->setIcon(icon6);
        actionConvert_ml_tree = new QAction(ViewerGuiClass);
        actionConvert_ml_tree->setObjectName(QString::fromUtf8("actionConvert_ml_tree"));
        actionConvert_ml_tree->setChecked(false);
        actionPrintout_mode = new QAction(ViewerGuiClass);
        actionPrintout_mode->setObjectName(QString::fromUtf8("actionPrintout_mode"));
        actionPrintout_mode->setCheckable(true);
        actionSemanticColoring = new QAction(ViewerGuiClass);
        actionSemanticColoring->setObjectName(QString::fromUtf8("actionSemanticColoring"));
        actionSemanticColoring->setCheckable(true);
        actionOpen_graph_incremental = new QAction(ViewerGuiClass);
        actionOpen_graph_incremental->setObjectName(QString::fromUtf8("actionOpen_graph_incremental"));
        actionOpen_graph_incremental->setIcon(icon);
        actionExport_view = new QAction(ViewerGuiClass);
        actionExport_view->setObjectName(QString::fromUtf8("actionExport_view"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/view-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_view->setIcon(icon7);
        actionStore_camera = new QAction(ViewerGuiClass);
        actionStore_camera->setObjectName(QString::fromUtf8("actionStore_camera"));
        actionRestore_camera = new QAction(ViewerGuiClass);
        actionRestore_camera->setObjectName(QString::fromUtf8("actionRestore_camera"));
        actionRestore_camera->setEnabled(false);
        actionHeight_map = new QAction(ViewerGuiClass);
        actionHeight_map->setObjectName(QString::fromUtf8("actionHeight_map"));
        actionHeight_map->setCheckable(true);
        action_bg_black = new QAction(ViewerGuiClass);
        action_bg_black->setObjectName(QString::fromUtf8("action_bg_black"));
        action_bg_white = new QAction(ViewerGuiClass);
        action_bg_white->setObjectName(QString::fromUtf8("action_bg_white"));
        action_bg_gray = new QAction(ViewerGuiClass);
        action_bg_gray->setObjectName(QString::fromUtf8("action_bg_gray"));
        actionChanged_free_only = new QAction(ViewerGuiClass);
        actionChanged_free_only->setObjectName(QString::fromUtf8("actionChanged_free_only"));
        actionChanged_free_only->setCheckable(true);
        actionExpand_tree = new QAction(ViewerGuiClass);
        actionExpand_tree->setObjectName(QString::fromUtf8("actionExpand_tree"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/go-bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExpand_tree->setIcon(icon8);
        actionReload_Octree = new QAction(ViewerGuiClass);
        actionReload_Octree->setObjectName(QString::fromUtf8("actionReload_Octree"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/view-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReload_Octree->setIcon(icon9);
        actionFollow_Mode = new QAction(ViewerGuiClass);
        actionFollow_Mode->setObjectName(QString::fromUtf8("actionFollow_Mode"));
        actionFollow_Mode->setCheckable(true);
        actionExport_sequence = new QAction(ViewerGuiClass);
        actionExport_sequence->setObjectName(QString::fromUtf8("actionExport_sequence"));
        actionExport_sequence->setCheckable(true);
        actionSelected = new QAction(ViewerGuiClass);
        actionSelected->setObjectName(QString::fromUtf8("actionSelected"));
        actionSelected->setCheckable(true);
        actionSelection_box = new QAction(ViewerGuiClass);
        actionSelection_box->setObjectName(QString::fromUtf8("actionSelection_box"));
        actionSelection_box->setCheckable(true);
        actionClear_selection = new QAction(ViewerGuiClass);
        actionClear_selection->setObjectName(QString::fromUtf8("actionClear_selection"));
        actionClear_selection->setEnabled(true);
        actionFill_selection = new QAction(ViewerGuiClass);
        actionFill_selection->setObjectName(QString::fromUtf8("actionFill_selection"));
        actionFill_selection->setEnabled(true);
        actionClear_nodes_in_selection = new QAction(ViewerGuiClass);
        actionClear_nodes_in_selection->setObjectName(QString::fromUtf8("actionClear_nodes_in_selection"));
        actionClear_nodes_in_selection->setEnabled(true);
        actionFill_nodes_in_selection = new QAction(ViewerGuiClass);
        actionFill_nodes_in_selection->setObjectName(QString::fromUtf8("actionFill_nodes_in_selection"));
        actionFill_nodes_in_selection->setEnabled(true);
        actionDelete_nodes_in_selection = new QAction(ViewerGuiClass);
        actionDelete_nodes_in_selection->setObjectName(QString::fromUtf8("actionDelete_nodes_in_selection"));
        actionDelete_nodes_in_selection->setEnabled(true);
        actionDelete_nodes_outside_of_selection = new QAction(ViewerGuiClass);
        actionDelete_nodes_outside_of_selection->setObjectName(QString::fromUtf8("actionDelete_nodes_outside_of_selection"));
        actionDelete_nodes_outside_of_selection->setEnabled(true);
        actionClear_unknown_in_selection = new QAction(ViewerGuiClass);
        actionClear_unknown_in_selection->setObjectName(QString::fromUtf8("actionClear_unknown_in_selection"));
        actionClear_unknown_in_selection->setEnabled(true);
        actionFill_unknown_in_selection = new QAction(ViewerGuiClass);
        actionFill_unknown_in_selection->setObjectName(QString::fromUtf8("actionFill_unknown_in_selection"));
        actionFill_unknown_in_selection->setEnabled(true);
        actionAlternateRendering = new QAction(ViewerGuiClass);
        actionAlternateRendering->setObjectName(QString::fromUtf8("actionAlternateRendering"));
        actionAlternateRendering->setCheckable(true);
        centralwidget = new QWidget(ViewerGuiClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ViewerGuiClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewerGuiClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuShow = new QMenu(menu_File);
        menuShow->setObjectName(QString::fromUtf8("menuShow"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuView_mode = new QMenu(menuView);
        menuView_mode->setObjectName(QString::fromUtf8("menuView_mode"));
        menuBackground_color = new QMenu(menuView);
        menuBackground_color->setObjectName(QString::fromUtf8("menuBackground_color"));
        menuInteract = new QMenu(menubar);
        menuInteract->setObjectName(QString::fromUtf8("menuInteract"));
        menuDelete_nodes = new QMenu(menuInteract);
        menuDelete_nodes->setObjectName(QString::fromUtf8("menuDelete_nodes"));
        menuDelete_nodes->setEnabled(false);
        menuFill_selection = new QMenu(menuInteract);
        menuFill_selection->setObjectName(QString::fromUtf8("menuFill_selection"));
        menuFill_selection->setEnabled(false);
        menuChange_nodes_in_selection = new QMenu(menuInteract);
        menuChange_nodes_in_selection->setObjectName(QString::fromUtf8("menuChange_nodes_in_selection"));
        menuChange_nodes_in_selection->setEnabled(false);
        ViewerGuiClass->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewerGuiClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ViewerGuiClass->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuInteract->menuAction());
        menu_File->addAction(actionOpen_file);
        menu_File->addAction(actionOpen_graph_incremental);
        menu_File->addAction(actionReload_Octree);
        menu_File->addSeparator();
        menu_File->addAction(actionSave_file);
        menu_File->addAction(actionExport_view);
        menu_File->addAction(actionExport_sequence);
        menu_File->addSeparator();
        menu_File->addAction(menuShow->menuAction());
        menu_File->addAction(loadcampose);
        menu_File->addAction(savecampose);
        menu_File->addSeparator();
        menu_File->addAction(actionHelp);
        menu_File->addAction(actionExit);
        menuView->addAction(actionPointcloud);
        menuView->addAction(actionOctree_cells);
        menuView->addAction(actionFree);
        menuView->addAction(actionSelected);
        menuView->addAction(actionOctree_structure);
        menuView->addAction(actionTrajectory);
        menuView->addAction(actionAxes);
        menuView->addAction(actionHideBackground);
        menuView->addSeparator();
        menuView->addAction(actionAlternateRendering);
        menuView->addSeparator();
        menuView->addAction(actionReset_view);
        menuView->addAction(actionStore_camera);
        menuView->addAction(actionRestore_camera);
        menuView->addSeparator();
        menuView->addAction(menuView_mode->menuAction());
        menuView->addSeparator();
        menuView->addAction(menuBackground_color->menuAction());
        menuView_mode->addAction(actionHeight_map);
        menuView_mode->addAction(actionPrintout_mode);
        menuView_mode->addAction(actionSemanticColoring);
        menuBackground_color->addAction(action_bg_black);
        menuBackground_color->addAction(action_bg_white);
        menuBackground_color->addAction(action_bg_gray);
        menuInteract->addAction(actionConvert_ml_tree);
        menuInteract->addAction(actionPrune_tree);
        menuInteract->addAction(actionExpand_tree);
        menuInteract->addSeparator();
        menuInteract->addAction(actionSelection_box);
        menuInteract->addAction(menuFill_selection->menuAction());
        menuInteract->addAction(menuChange_nodes_in_selection->menuAction());
        menuInteract->addAction(menuDelete_nodes->menuAction());
        menuInteract->addSeparator();
        menuInteract->addAction(actionClear);
        menuInteract->addSeparator();
        menuInteract->addAction(actionSettings);
        menuDelete_nodes->addAction(actionDelete_nodes_in_selection);
        menuDelete_nodes->addAction(actionDelete_nodes_outside_of_selection);
        menuFill_selection->addAction(actionClear_selection);
        menuFill_selection->addAction(actionFill_selection);
        menuFill_selection->addSeparator();
        menuFill_selection->addAction(actionClear_unknown_in_selection);
        menuFill_selection->addAction(actionFill_unknown_in_selection);
        menuChange_nodes_in_selection->addAction(actionClear_nodes_in_selection);
        menuChange_nodes_in_selection->addAction(actionFill_nodes_in_selection);

        retranslateUi(ViewerGuiClass);

        QMetaObject::connectSlotsByName(ViewerGuiClass);
    } // setupUi

    void retranslateUi(QMainWindow *ViewerGuiClass)
    {
        ViewerGuiClass->setWindowTitle(QApplication::translate("ViewerGuiClass", "Octomap Viewer", nullptr));
        actionOpen_file->setText(QApplication::translate("ViewerGuiClass", "Open file...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen_file->setToolTip(QApplication::translate("ViewerGuiClass", "Open file", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave_file->setText(QApplication::translate("ViewerGuiClass", "Save tree...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_file->setToolTip(QApplication::translate("ViewerGuiClass", "Save tree to file", nullptr));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("ViewerGuiClass", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("ViewerGuiClass", "Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionPointcloud->setText(QApplication::translate("ViewerGuiClass", "Pointcloud", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPointcloud->setShortcut(QApplication::translate("ViewerGuiClass", "P", nullptr));
#endif // QT_NO_SHORTCUT
        actionOctree_cells->setText(QApplication::translate("ViewerGuiClass", "Occupied Octree Volumes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOctree_cells->setShortcut(QApplication::translate("ViewerGuiClass", "O", nullptr));
#endif // QT_NO_SHORTCUT
        actionOctree_structure->setText(QApplication::translate("ViewerGuiClass", "Octree Structure", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOctree_structure->setShortcut(QApplication::translate("ViewerGuiClass", "S", nullptr));
#endif // QT_NO_SHORTCUT
        actionTrajectory->setText(QApplication::translate("ViewerGuiClass", "Trajectory", nullptr));
#ifndef QT_NO_SHORTCUT
        actionTrajectory->setShortcut(QApplication::translate("ViewerGuiClass", "T", nullptr));
#endif // QT_NO_SHORTCUT
        actionAxes->setText(QApplication::translate("ViewerGuiClass", "Submap axes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAxes->setShortcut(QApplication::translate("ViewerGuiClass", "X", nullptr));
#endif // QT_NO_SHORTCUT
        actionHideBackground->setText(QApplication::translate("ViewerGuiClass", "Hide background map", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHideBackground->setShortcut(QApplication::translate("ViewerGuiClass", "0", nullptr));
#endif // QT_NO_SHORTCUT
        actionSwitchRenderMode->setText(QApplication::translate("ViewerGuiClass", "Alternative rendering", nullptr));
        actionClear->setText(QApplication::translate("ViewerGuiClass", "Remove all octrees", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("ViewerGuiClass", "C", nullptr));
#endif // QT_NO_SHORTCUT
        actionFree->setText(QApplication::translate("ViewerGuiClass", "Free Octree Volumes", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFree->setShortcut(QApplication::translate("ViewerGuiClass", "F", nullptr));
#endif // QT_NO_SHORTCUT
        savecampose->setText(QApplication::translate("ViewerGuiClass", "Save viewer state (camera, window)", nullptr));
        loadcampose->setText(QApplication::translate("ViewerGuiClass", "Load viewer state (camera, window)", nullptr));
        actionHelp->setText(QApplication::translate("ViewerGuiClass", "Help", nullptr));
        actionSettings->setText(QApplication::translate("ViewerGuiClass", "Settings", nullptr));
        actionReset_view->setText(QApplication::translate("ViewerGuiClass", "Reset View", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReset_view->setToolTip(QApplication::translate("ViewerGuiClass", "Reset the 3D viewpoint", nullptr));
#endif // QT_NO_TOOLTIP
        actionTest->setText(QApplication::translate("ViewerGuiClass", "Test", nullptr));
        actionPrune_tree->setText(QApplication::translate("ViewerGuiClass", "Prune tree", nullptr));
        actionConvert_ml_tree->setText(QApplication::translate("ViewerGuiClass", "Convert to maximum likelihood tree", nullptr));
#ifndef QT_NO_TOOLTIP
        actionConvert_ml_tree->setToolTip(QApplication::translate("ViewerGuiClass", "Convert to maximum likelihood tree", nullptr));
#endif // QT_NO_TOOLTIP
        actionPrintout_mode->setText(QApplication::translate("ViewerGuiClass", "Printout (black/white)", nullptr));
        actionSemanticColoring->setText(QApplication::translate("ViewerGuiClass", "Semantic Coloring", nullptr));
        actionOpen_graph_incremental->setText(QApplication::translate("ViewerGuiClass", "Open graph incremental...", nullptr));
        actionExport_view->setText(QApplication::translate("ViewerGuiClass", "Export view...", nullptr));
        actionStore_camera->setText(QApplication::translate("ViewerGuiClass", "Store Camera", nullptr));
        actionRestore_camera->setText(QApplication::translate("ViewerGuiClass", "Restore camera", nullptr));
        actionHeight_map->setText(QApplication::translate("ViewerGuiClass", "Height map (color coded)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHeight_map->setShortcut(QApplication::translate("ViewerGuiClass", "1", nullptr));
#endif // QT_NO_SHORTCUT
        action_bg_black->setText(QApplication::translate("ViewerGuiClass", "Black", nullptr));
        action_bg_white->setText(QApplication::translate("ViewerGuiClass", "White", nullptr));
        action_bg_gray->setText(QApplication::translate("ViewerGuiClass", "Gray", nullptr));
        actionChanged_free_only->setText(QApplication::translate("ViewerGuiClass", "Selected Octree Volumes", nullptr));
        actionExpand_tree->setText(QApplication::translate("ViewerGuiClass", "Expand tree", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExpand_tree->setToolTip(QApplication::translate("ViewerGuiClass", "Expand tree", nullptr));
#endif // QT_NO_TOOLTIP
        actionReload_Octree->setText(QApplication::translate("ViewerGuiClass", "Reload Octree", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReload_Octree->setToolTip(QApplication::translate("ViewerGuiClass", "Reload the current progress of the Octree", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionReload_Octree->setShortcut(QApplication::translate("ViewerGuiClass", "R", nullptr));
#endif // QT_NO_SHORTCUT
        actionFollow_Mode->setText(QApplication::translate("ViewerGuiClass", "Fly Mode", nullptr));
        actionExport_sequence->setText(QApplication::translate("ViewerGuiClass", "Export view as image sequence...", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExport_sequence->setToolTip(QApplication::translate("ViewerGuiClass", "Export view as image sequence. This can be used to create videos.", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelected->setText(QApplication::translate("ViewerGuiClass", "Selected Octree Volumes", nullptr));
        actionSelection_box->setText(QApplication::translate("ViewerGuiClass", "Show selection box", nullptr));
        actionClear_selection->setText(QApplication::translate("ViewerGuiClass", "With \"free\" (all)", nullptr));
        actionFill_selection->setText(QApplication::translate("ViewerGuiClass", "With \"occupied\" (all)", nullptr));
        actionClear_nodes_in_selection->setText(QApplication::translate("ViewerGuiClass", "To \"free\"", nullptr));
        actionFill_nodes_in_selection->setText(QApplication::translate("ViewerGuiClass", "To \"occupied\"", nullptr));
        actionDelete_nodes_in_selection->setText(QApplication::translate("ViewerGuiClass", "In selection", nullptr));
        actionDelete_nodes_outside_of_selection->setText(QApplication::translate("ViewerGuiClass", "Outside of selection (crop)", nullptr));
        actionClear_unknown_in_selection->setText(QApplication::translate("ViewerGuiClass", "With \"free\" (only unknown)", nullptr));
        actionFill_unknown_in_selection->setText(QApplication::translate("ViewerGuiClass", "With \"occupied\" (only unknown)", nullptr));
        actionAlternateRendering->setText(QApplication::translate("ViewerGuiClass", "Alternate Rendering", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAlternateRendering->setToolTip(QApplication::translate("ViewerGuiClass", "Uses precompiled rendering of the octomap. Faster and requires less CPU but more memory on your graphics card. The first rendering takes longer.", nullptr));
#endif // QT_NO_TOOLTIP
        menu_File->setTitle(QApplication::translate("ViewerGuiClass", "&File", nullptr));
        menuShow->setTitle(QApplication::translate("ViewerGuiClass", "Show", nullptr));
        menuView->setTitle(QApplication::translate("ViewerGuiClass", "View", nullptr));
        menuView_mode->setTitle(QApplication::translate("ViewerGuiClass", "View Mode", nullptr));
        menuBackground_color->setTitle(QApplication::translate("ViewerGuiClass", "Background", nullptr));
        menuInteract->setTitle(QApplication::translate("ViewerGuiClass", "Edit", nullptr));
        menuDelete_nodes->setTitle(QApplication::translate("ViewerGuiClass", "Delete nodes", nullptr));
        menuFill_selection->setTitle(QApplication::translate("ViewerGuiClass", "Fill selection", nullptr));
        menuChange_nodes_in_selection->setTitle(QApplication::translate("ViewerGuiClass", "Change nodes in selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewerGuiClass: public Ui_ViewerGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWERGUI_H
