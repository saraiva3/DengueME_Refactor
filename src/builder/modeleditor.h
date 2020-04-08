#ifndef MODELEDITOR_H
#define MODELEDITOR_H

#include <QDialog>
#include <QtCore>
#include <QtWidgets>

namespace Ui {
class ModelEditor;
}

class ModelEditor : public QDialog {
  Q_OBJECT

 public:
  explicit ModelEditor(QWidget* parent = 0, QString filename = "");
  ~ModelEditor();

 private:
  Ui::ModelEditor* ui;
  void closeEvent(QCloseEvent* event);

 private slots:
  void save();
  void openSyntaxHelp();
};

#endif // MODELEDITOR_H
