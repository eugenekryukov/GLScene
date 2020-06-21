//
// This unit is part of the GLScene Engine, http://glscene.org
//

unit GLS.cgRegister;

(*  Registration unit for CG shader *)

interface

{$I GLScene.inc}

uses
  System.Classes,
  DesignIntf,
  DesignEditors,
  VCLEditors,

  GLMaterial,

  Cg,
  CgGL,
  GLS.SceneRegister,
  GLS.cgShader,
  GLS.cgBombShader;

procedure Register;

//-----------------------------------------------------
implementation
//-----------------------------------------------------

procedure Register;
begin
  RegisterComponents('GLScene Shaders', [TCgShader, TCgBombShader]);
  RegisterPropertyEditor(TypeInfo(TGLLibMaterialName), TCgBombShader, '', TGLLibMaterialNameProperty);
end;

end.