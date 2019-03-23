object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Welcome!'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Constraints.MaxHeight = 338
  Constraints.MaxWidth = 651
  Constraints.MinHeight = 338
  Constraints.MinWidth = 651
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poScreenCenter
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Greet: TPanel
    Left = 121
    Top = 40
    Width = 379
    Height = 193
    Caption = #1051#1072#1089#1082#1072#1074#1086' '#1087#1088#1086#1089#1080#1084#1086'!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object Dev: TPanel
      Left = 8
      Top = 121
      Width = 361
      Height = 64
      Caption = #1055#1088#1086#1075#1088#1072#1084#1091' '#1074#1080#1082#1086#1085#1072#1074' '#1042#1072#1076#1080#1084' '#1064#1077#1089#1090#1077#1088#1110#1082#1086#1074
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
end
