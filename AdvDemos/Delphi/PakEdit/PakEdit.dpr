program PakEdit;

uses
  Forms,
  Main in 'Main.pas' {Form1},
  FolderDialog in 'FolderDialog.pas' {FDialog},
  FolderSelect in 'FolderSelect.pas' {FolderSel},
  Frm_CompressionRatio in 'Frm_CompressionRatio.pas' {FrmCompressionRatio};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TFDialog, FDialog);
  Application.CreateForm(TFolderSel, FolderSel);
  Application.CreateForm(TFrmCompressionRatio, FrmCompressionRatio);
  Application.Run;
end.
