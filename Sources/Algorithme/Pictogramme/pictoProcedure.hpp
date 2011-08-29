/*
 * =====================================================================================
 *
 *       Filename:  pictoProcedure.hpp
 *
 *    Description:  Tabula Rasa : Classe réprésentant un appel de procedure
 *
 *        Version:  1.0
 *        Created:  15/08/2011 03:39:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Erebe (), erebe@erebe.eu
 *        Company:  Erebe corporation
 *
 * =====================================================================================
 */
#ifndef PICTOPROCEDURE_HPP
#define PICTOPROCEDURE_HPP
#include "pictogramme.hpp"

class AlgorithmeScene;

class PictoProcedure : public Pictogramme {

     public:
          enum { Type = UserType + 5 };

          PictoProcedure( QString titre,
                          QString preCondition,
                          QString postCondition,
                          QGraphicsItem* parent = 0,
                          QGraphicsScene* scene = 0 );

          PictoProcedure( const QDomElement& node,
                          AlgorithmeScene* scene = 0 );


          /*-----------------------------------------------------------------------------
           *  Méthodes
           *-----------------------------------------------------------------------------*/
          void paint( QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget );
          QRectF boundingRect() const;
          virtual int type() const { return Type; }


          void toXml( QDomDocument& doc, QDomNode& node ) const;
          void updateDimension();
          inline bool detail() const { return detail_; }


     private:
          /*-----------------------------------------------------------------------------
           *  Attributs
           *-----------------------------------------------------------------------------*/
          bool detail_;
          bool emptyDetail_;

          /*-----------------------------------------------------------------------------
           *  Méthodes privées
           *-----------------------------------------------------------------------------*/
          int drawDetails( QPainter* painter, LabelItem* texte, int pos ) const;

          /*-----------------------------------------------------------------------------
           *  Gestionnaire évènements
           *-----------------------------------------------------------------------------*/
          void processAction( QAction* action, QGraphicsSceneContextMenuEvent* event );



};

#endif // PICTOPROCEDURE_HPP