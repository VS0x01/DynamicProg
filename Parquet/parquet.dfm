object Form1: TForm1
  Left = 0
  Top = 0
  Width = 1340
  Height = 599
  AutoScroll = True
  Caption = #1047#1072#1076#1072#1095#1072' '#1087#1088#1086' '#1087#1072#1088#1082#1077#1090
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object input_values: TPanel
    Left = 19
    Top = 24
    Width = 185
    Height = 81
    TabOrder = 0
    object m: TLabel
      Left = 16
      Top = 19
      Width = 8
      Height = 13
      Caption = 'M'
    end
    object n: TLabel
      Left = 16
      Top = 47
      Width = 7
      Height = 13
      Caption = 'N'
    end
    object n_value: TCSpinEdit
      Left = 53
      Top = 44
      Width = 121
      Height = 22
      MaxValue = 8
      TabOrder = 0
      Value = 1
    end
    object m_value: TCSpinEdit
      Left = 53
      Top = 16
      Width = 121
      Height = 22
      MaxValue = 20
      TabOrder = 1
      Value = 2
    end
  end
  object Room: TStringGrid
    Left = 210
    Top = 68
    Width = 1105
    Height = 444
    ColCount = 20
    DefaultColWidth = 50
    DefaultRowHeight = 50
    FixedCols = 0
    RowCount = 8
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnSelectCell = RoomSelectCell
  end
  object Res: TPanel
    Left = 19
    Top = 171
    Width = 185
    Height = 41
    TabOrder = 2
    OnClick = ResClick
    object Result: TLabel
      Left = 16
      Top = 12
      Width = 37
      Height = 13
      Caption = 'Result: '
      OnMouseLeave = ResultMouseLeave
    end
    object ResultValue: TLabel
      Left = 53
      Top = 12
      Width = 3
      Height = 13
    end
  end
  object Buttons: TPanel
    Left = 19
    Top = 111
    Width = 185
    Height = 54
    TabOrder = 3
    object Clear: TButton
      Left = 128
      Top = 8
      Width = 55
      Height = 25
      Caption = 'Clear'
      TabOrder = 0
      OnClick = ClearClick
    end
    object Go: TButton
      Left = 0
      Top = 0
      Width = 65
      Height = 41
      Caption = 'Solve'
      TabOrder = 1
      OnClick = GoClick
    end
    object WriteAll: TButton
      Left = 71
      Top = 8
      Width = 56
      Height = 25
      Caption = 'Write All'
      TabOrder = 2
      OnClick = WriteAllClick
    end
  end
  object Опис: TPanel
    Left = 210
    Top = 21
    Width = 351
    Height = 41
    Caption = #1050#1110#1083#1100#1082#1110#1089#1090#1100' '#1089#1087#1086#1089#1086#1073#1110#1074' '#1079#1072#1084#1086#1089#1090#1080#1090#1080' '#1082#1110#1084#1085#1072#1090#1091' MxN '#1096#1084#1072#1090#1082#1072#1084#1080' '#1087#1072#1088#1082#1077#1090#1091' 2'#1093'1'
    TabOrder = 4
  end
  object Advanced: TCheckBox
    Left = 19
    Top = 1
    Width = 206
    Height = 17
    Caption = #1044#1086#1079#1074#1086#1083#1080#1090#1080' '#1082#1110#1084#1085#1072#1090#1091' '#1073#1110#1083#1100#1096#1086#1075#1086' '#1088#1086#1079#1084#1110#1088#1091
    TabOrder = 5
    OnClick = AdvancedClick
  end
  object MainMenu1: TMainMenu
    object Window1: TMenuItem
      Caption = 'File'
      object Print1: TMenuItem
        Caption = 'Print'
        OnClick = Print1Click
      end
      object Close1: TMenuItem
        Caption = 'Close'
        OnClick = Close1Click
      end
    end
    object Help1: TMenuItem
      Caption = '&Help'
      object HowtoUseHelp1: TMenuItem
        Caption = '&How to Use Help'
        OnClick = HowtoUseHelp1Click
      end
      object About1: TMenuItem
        Caption = '&About...'
        OnClick = About1Click
      end
    end
  end
  object PrinterSetupDialog1: TPrinterSetupDialog
    Left = 16
    Top = 216
  end
end
