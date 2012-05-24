#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include<QAction>
#include<QMenu>
#include<QTextEdit>
#include<QToolBar>
#include<QMessageBox>
#include<QMenuBar>
#include<QStatusBar>
#include<QFile>
#include<QFileDialog>
#include<QFontDialog>
class QAction;
class QMenu;
class QTextEdit;
class QFile;
class QFileDialog;
class QFontDialog;
class QStatusBar;
class QToolBar;
class QMenuBar;
class QMessageBox;
class TextArea : public QTextEdit{
    Q_OBJECT

public:
    TextArea(QWidget *parent=0);

 signals:


 private slots:
    //// bool changeFontColor(QColor color);

 private:
};
class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    /*Constructor*/
    MainWindow();
    void initMenus();
    void initToolBars();
    void initContext();
private slots:
    void openFileSlot();
    void saveFileSlot();
    void newFileSlot();
    void saveAsFileSlot();
    void changeFont();
    void aboutMe();
    void isModified();
    void updateTitle();
    void findSlot();
private:
    enum{saveFile,openFile};
    /*Actions*/
    QAction *newFileAction;
    QAction *openFileAction;
    QAction *saveFileAction;
    QAction *exitFileAction;
    QAction *saveAsFileAction;
    QAction *copyEditAction;
    QAction *pasteEditAction;
    QAction *fontEditAction;
    QAction *cutEditAction;
    QAction *toolEditAction;
    QAction *findEditAction;
    QAction *colorEditAction;
    QAction *selectEditAction;
    QAction *undoEditAction;
    QAction *redoEditAction;
    QAction *aboutHelpAction;
    /*Menus*/
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *helpMenu;
    /*ToolBars*/
    QToolBar *toolBar;
    QToolBar *editToolBar;

    TextArea *textArea;
    bool documentModified;
    QString windowTitle;
    QString curFilename;
    /*Methods*/

    bool fileOperate(QString &flname,int mode);

};
//QTextEdit()


#endif // MAINWINDOW_H
