object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Pocetna'
  ClientHeight = 430
  ClientWidth = 597
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 32
    Top = 24
    Width = 78
    Height = 15
    Caption = 'Korisni'#269'ko ime'
  end
  object Label2: TLabel
    Left = 32
    Top = 78
    Width = 40
    Height = 15
    Caption = 'Lozinka'
  end
  object Button1: TButton
    Left = 32
    Top = 144
    Width = 78
    Height = 25
    Caption = 'Prijava'
    TabOrder = 0
    OnClick = Button1Click
  end
  object EditKorisnicko: TEdit
    Left = 32
    Top = 45
    Width = 174
    Height = 23
    TabOrder = 1
  end
  object EditLozinka: TEdit
    Left = 32
    Top = 99
    Width = 174
    Height = 23
    TabOrder = 2
  end
  object Button2: TButton
    Left = 128
    Top = 144
    Width = 78
    Height = 25
    Caption = 'Registracija'
    TabOrder = 3
    OnClick = Button2Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=lozich_db.mdb;Persi' +
      'st Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 304
    Top = 40
  end
  object Korisnici: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Users'
    Left = 304
    Top = 104
  end
end
