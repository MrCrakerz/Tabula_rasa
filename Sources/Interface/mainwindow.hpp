/*
 * =====================================================================================
 *
 *       Filename:  mainwindow.hpp
 *
 *    Description:  Tabula Rasa : Classe gérant l'interface de l'application
 *
 *        Version:  1.0
 *        Created:  15/08/2011 02:19:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Erebe (), erebe@erebe.eu
 *        Company:  Erebe corporation
 *
 * =====================================================================================
 */
#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QInputDialog>
#include "Pictogramme/labelItem.hpp"
#include "algorithmeScene.hpp"

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow {
          Q_OBJECT

     public:
          explicit MainWindow( QWidget* parent = 0 );
          ~MainWindow();

     private:
          Ui::MainWindow* ui;
          void selectQAction( AlgorithmeScene::Mode mode );

     private slots:
          void on_actionMode_Edition_triggered( bool checked );
          void on_actionMode_Insertion_triggered( bool checked );
          void on_actionAction_triggered( bool checked );
          void on_actionIteration_triggered( bool checked );
          void on_actionProcedure_triggered( bool checked );
          void on_actionCondition_triggered( bool checked );
          void on_actionConditionMultiple_triggered( bool checked );
          void on_actionSortie_triggered( bool checked );
          void on_tabWidget_tabCloseRequested( int index );
          void on_actionNouveau_triggered();
          void on_actionExporter_vers_une_image_triggered();

          void on_actionRenommer_l_algorithme_triggered();

          void on_actionFermer_l_onglet_triggered();

     public slots:
          void setMode( AlgorithmeScene::Mode mode );

          void itemAdded( Pictogramme* item ) {
               connect( item, SIGNAL( doubleClick( LabelItem* ) ), this, SLOT( changeLabel( LabelItem* ) ) );
          }

          void changeLabel( LabelItem* item ) {

               bool ok;
               QString test = QInputDialog::getText( this, "Changer le label", "Nouvel intitulé", QLineEdit::Normal, item->label(), &ok );

               if( ok )
                    { item->setLabel( test ); }

          }

};
#endif                           // MAINWINDOW_HPP
