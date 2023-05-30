object Registracija: TRegistracija
  Left = 0
  Top = 0
  Caption = 'Registracija'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 78
    Height = 15
    Caption = 'Korisni'#269'ko ime'
  end
  object Lozinka: TLabel
    Left = 16
    Top = 66
    Width = 40
    Height = 15
    Caption = 'Lozinka'
  end
  object Label2: TLabel
    Left = 16
    Top = 116
    Width = 88
    Height = 15
    Caption = 'Ponovite lozinku'
  end
  object EKorisnickoReg: TEdit
    Left = 16
    Top = 37
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object ELozinkaReg: TEdit
    Left = 16
    Top = 87
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object ELozinka2Reg: TEdit
    Left = 16
    Top = 145
    Width = 121
    Height = 23
    TabOrder = 2
  end
  object Gumb: TButton
    Left = 16
    Top = 192
    Width = 121
    Height = 25
    Caption = 'Registracija'
    TabOrder = 3
    OnClick = GumbClick
  end
  object Korisnici2: TADOTable
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    TableName = 'Users'
    Left = 232
    Top = 40
  end
end
