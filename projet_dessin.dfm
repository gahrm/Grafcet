object fnPrincipale: TfnPrincipale
  Left = 0
  Top = 0
  Caption = 'fnPrincipale'
  ClientHeight = 527
  ClientWidth = 786
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 1200
    Height = 1000
    AutoSize = True
    Center = True
  end
  object btEtapeInit: TButton
    Left = 135
    Top = 36
    Width = 75
    Height = 25
    Caption = 'Etape_Init'
    TabOrder = 0
    Visible = False
    OnClick = btEtapeInitClick
  end
  object btEtape: TButton
    Left = 232
    Top = 36
    Width = 81
    Height = 25
    Caption = 'Etape'
    TabOrder = 1
    Visible = False
    OnClick = btEtapeClick
  end
  object btTrans: TButton
    Left = 335
    Top = 36
    Width = 75
    Height = 25
    Caption = 'Transition'
    TabOrder = 2
    Visible = False
  end
  object btDivOU: TButton
    Left = 440
    Top = 36
    Width = 75
    Height = 25
    Caption = 'Div_OU'
    TabOrder = 3
    Visible = False
  end
  object btTransBis: TButton
    Left = 335
    Top = 67
    Width = 75
    Height = 25
    Caption = 'Transition_bis'
    TabOrder = 4
    Visible = False
  end
  object btConvOU: TButton
    Left = 440
    Top = 67
    Width = 75
    Height = 25
    Caption = 'conv OU'
    TabOrder = 5
    Visible = False
  end
  object dtDivEt: TButton
    Left = 536
    Top = 36
    Width = 75
    Height = 25
    Caption = 'div ET'
    TabOrder = 6
    Visible = False
    OnClick = dtDivEtClick
  end
  object btConvET: TButton
    Left = 536
    Top = 67
    Width = 75
    Height = 25
    Caption = 'conv ET'
    TabOrder = 7
    Visible = False
    OnClick = btConvETClick
  end
  object btDecalBas: TButton
    Left = 632
    Top = 67
    Width = 75
    Height = 25
    Caption = 'decal bas'
    TabOrder = 8
    Visible = False
  end
  object btDecalDroite: TButton
    Left = 632
    Top = 36
    Width = 75
    Height = 25
    Caption = 'decal droite'
    TabOrder = 9
    Visible = False
  end
  object demi_decal_bas: TButton
    Left = 632
    Top = 108
    Width = 75
    Height = 25
    Caption = 'demi_decal_bas'
    TabOrder = 10
    Visible = False
  end
  object btEdit: TButton
    Left = 632
    Top = 160
    Width = 75
    Height = 25
    Caption = 'Dessin'
    TabOrder = 11
    OnClick = btEditClick
  end
  object btRenvoi: TButton
    Left = 232
    Top = 67
    Width = 81
    Height = 25
    Caption = 'renvoi'
    TabOrder = 12
    Visible = False
    OnClick = btRenvoiClick
  end
end
