[Variables]
r1=185
r2=60

[Wings]
Meter=Image
x=0
y=0
ImageName=#@#Image\5\Wings.png
UpdateDivider=-1

[DialPlate_back]
Meter=Image
x=400
y=200
ImageName=#@#Image\5\DialPlate_back.png
UpdateDivider=-1

[̫���߶ȽǱ���]
Meter=Shape
x=650
y=450
Shape=Path SEA0| StrokeWidth 0 | Fill LinearGradient Gradient1
SEA0=[SEA0]
Gradient1=270|40,40,255;0|255,150,240;1
Shape2=Path SEA_18| StrokeWidth 2 | Fill Color 50,50,50,255
SEA_18=[SEA_18]
Shape3=Combine Shape|Exclude Shape2
UpdateDivider=-1

[�Űͱ���ʱ�����]
Meter=Shape
x=650
y=450
Shape=Path Path1| Extend MySharedModifiers
Shape2=Path Path2| Extend MySharedModifiers
Shape3=Path Path3| Extend MySharedModifiers
Shape4=Path Path4| Extend MySharedModifiers
Shape5=Path Path5| Extend MySharedModifiers
Shape6=Path Path6| Extend MySharedModifiers
Shape7=Path Path7| Extend MySharedModifiers
Shape8=Path Path8| Extend MySharedModifiers
Shape9=Path Path9| Extend MySharedModifiers
Shape10=Path Path10| Extend MySharedModifiers
Shape11=Path Path11| Extend MySharedModifiers
Path1=[BBL1]
Path2=[BBL2]
Path3=[BBL3]
Path4=[BBL4]
Path5=[BBL5]
Path6=[BBL6]
Path7=[BBL7]
Path8=[BBL8]
Path9=[BBL9]
Path10=[BBL10]
Path11=[BBL11]
MySharedModifiers=StrokeWidth 2 | Stroke Color 3,30,90,255 | Fill Color 0,0,0,0
UpdateDivider=-1

[DialPlate]
Meter=Image
x=400
y=200
ImageName=#@#Image\5\DialPlate.png
UpdateDivider=-1

[StarHourAngle]
Measure=Calc
Formula=�����ʱ*500

[MoonHourAngle]
Measure=Calc
Formula=������ʱ*500

[SunHourAngle]
Measure=Calc
Formula=��̫��ʱ*500

[MoonPhase]
Measure=Calc
Formula=(������ʱ+36-��̫��ʱ)%24/12-1

[Zodiac_shadow]
Meter=Rotator
x=400
y=207
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=StarHourAngle
ImageName=#@#Image\5\Zodiac_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Zodiac]
Meter=Rotator
x=400
y=200
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=StarHourAngle
ImageName=#@#Image\5\Zodiac.png
ValueRemainder=12000

[StarHand_shadow]
Meter=Rotator
x=400
y=207
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=StarHourAngle
ImageName=#@#Image\5\StarHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[StarHand]
Meter=Rotator
x=400
y=200
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=StarHourAngle
ImageName=#@#Image\5\StarHand.png
ValueRemainder=12000

[MoonHand_shadow]
Meter=Rotator
x=400
y=207
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=MoonHourAngle
ImageName=#@#Image\5\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Moon_shadow]
Meter=Image
x=(650+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))-17)
y=(450-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))-10)
ImageName=#@#Image\5\Moon_shadow.png
ImageAlpha=200
DynamicVariables=1

[MoonHand]
Meter=Rotator
x=400
y=200
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=MoonHourAngle
ImageName=#@#Image\5\SunMoonHand.png
ValueRemainder=12000

[FullMoon]
Meter=Image
x=(650+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))-17)
y=(450-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))-17)
ImageName=#@#Image\5\FullMoon.png
DynamicVariables=1

[Moon]
Meter=Shape
Shape=Ellipse (650+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))),(450-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))),17
DynamicVariables=1

[NewMoon]
Meter=Image
x=(650+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))+34*[MoonPhase]*Cos(Rad([������ʱ]*15))-17)
y=(450-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))+34*[MoonPhase]*Sin(Rad([������ʱ]*15))-17)
ImageName=#@#Image\5\NewMoon.png
Container=Moon
DynamicVariables=1

[SunHand_shadow]
Meter=Rotator
x=400
y=207
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=SunHourAngle
ImageName=#@#Image\5\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Sun_shadow]
Meter=Image
x=(650+[̫��λ�ð뾶]*Sin(Rad([��̫��ʱ]*15))-25)
y=(450-[̫��λ�ð뾶]*Cos(Rad([��̫��ʱ]*15))-18)
ImageName=#@#Image\5\Sun_shadow.png
ImageAlpha=200
DynamicVariables=1

[SunHand]
Meter=Rotator
x=400
y=200
w=500
h=500
OffSetX=250
OffSetY=250
MeasureName=SunHourAngle
ImageName=#@#Image\5\SunMoonHand.png
ValueRemainder=12000

[Sun]
Meter=Image
x=(650+[̫��λ�ð뾶]*Sin(Rad([��̫��ʱ]*15))-25)
y=(450-[̫��λ�ð뾶]*Cos(Rad([��̫��ʱ]*15))-25)
ImageName=#@#Image\5\Sun.png
DynamicVariables=1

[HandPedestal]
Meter=Image
x=636
y=436
ImageName=#@#Image\5\HandPedestal.png

[OffSet]
Measure=Calc
Formula=OffSet+1
UpdateDivider=1

[Circle]
Meter=Rotator
x=260
y=60
w=780
h=780
OffSetX=390
OffSetY=390
MeasureName=OffSet
ImageName=#@#Image\5\Circle.png
ValueRemainder=360
UpdateDivider=1

[hgContainer]
Meter=Shape
x=325
y=125
Shape=Rectangle 0,0,650,650 | Fill RadialGradient Gradient1 | StrokeWidth 0
Gradient1=0,0|0,0,0,255;0|0,0,0,255;0.9|0,0,0,0;1
UpdateDivider=-1

[huiguang1]
Meter=Image
x=([OffSet]%100-100)
ImageAlpha=(7*Abs(([OffSet]+50)%100-50))
ImageName=#@#Image\5\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1

[huiguang2]
Meter=Image
x=(([OffSet]+50)%100-100)
ImageAlpha=(7*Abs([OffSet]%100-50))
ImageName=#@#Image\5\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1