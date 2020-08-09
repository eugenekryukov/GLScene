//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "GLS.BaseClasses"
#pragma link "GLS.Blur"
#pragma link "GLS.Cadencer"
#pragma link "GLS.Coordinates"

#pragma link "GLS.GeomObjects"
#pragma link "GLS.Material"
#pragma link "GLS.Objects"
#pragma link "GLS.Scene"
#pragma link "GLS.SimpleNavigation"
#pragma link "GLS.SceneViewer"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::GLCadencer1Progress(TObject *Sender, const double deltaTime,
		  const double newTime)
{
  GLCube1->RollAngle = GLCube1->RollAngle - 175*deltaTime;
  GLCube1->TurnAngle = GLCube1->TurnAngle + 175*deltaTime;
  GLTorus1->RollAngle = GLTorus1->RollAngle - 5*deltaTime;
  GLTorus1->TurnAngle = GLTorus1->TurnAngle + 5*deltaTime;
  GLIcosahedron1->RollAngle = GLIcosahedron1->RollAngle - 50*deltaTime;
  GLIcosahedron1->TurnAngle = GLIcosahedron1->TurnAngle + 50*deltaTime;
  GLCube1->Position->X = Sin(newTime+2)*8-1;
  GLCube1->Position->Y = Cos(newTime+2)*2;
  GLCube1->Position->Z = Cos(newTime+2)*3;
  GLCube2->Position->X = Sin(newTime+2)*8-1;
  GLSceneViewer1->Invalidate();

}
//---------------------------------------------------------------------------
