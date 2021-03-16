#ifndef PAMPLEMOUSSE_UI_H
#define PAMPLEMOUSSE_UI_H

#include "ui_mainwindow.h"
#include "outputtable.h"


class PamplemousseUI : public QMainWindow, private Ui_PamplemousseUI
{
    Q_OBJECT

    OutputTable inputs;
    OutputTable outputs;
    bool somethingLoaded = false;
public:
    explicit PamplemousseUI(QWidget *parent = nullptr);
    void clear();
private slots:
    void on_addButton_clicked();
    void on_removeButton_clicked();
    void on_actionOpen_triggered();
    void on_model_outputs_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);
    void slotSelectionChanged(const QItemSelection &, const QItemSelection &);
    void on_actionCase_Insensitive_toggled(bool arg1);
    void on_actionExport_triggered();
    void on_neurons_currentIndexChanged(int index);
};


#include "pamplemousse_ui.moc"

#endif // PAMPLEMOUSSE_UI_H
