object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 314
  ClientWidth = 428
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 209
    Top = 21
    Width = 28
    Height = 23
    Caption = 'Pila'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 24
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Push'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 24
    Top = 55
    Width = 75
    Height = 25
    Caption = 'Pop'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 24
    Top = 86
    Width = 75
    Height = 25
    Caption = 'Cant'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 24
    Top = 117
    Width = 75
    Height = 25
    Caption = 'Borrar'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 24
    Top = 148
    Width = 75
    Height = 25
    Caption = 'Cabeza'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Memo1: TMemo
    Left = 129
    Top = 26
    Width = 64
    Height = 280
    TabOrder = 5
  end
  object Button6: TButton
    Left = 24
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Asignar'
    TabOrder = 6
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 24
    Top = 223
    Width = 99
    Height = 25
    Caption = 'ValorEnPosicion'
    TabOrder = 7
    OnClick = Button7Click
  end
end
