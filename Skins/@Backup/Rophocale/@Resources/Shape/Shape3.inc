[Variables]
r1=111
r2=36

[Wings]
Meter=Image
x=0
y=0
ImageName=#@#Image\3\Wings.png
UpdateDivider=-1

[DialPlate_back]
Meter=Image
x=240
y=120
ImageName=#@#Image\3\DialPlate_back.png
UpdateDivider=-1

[̫���߶ȽǱ���]
Meter=Shape
x=390
y=270
Shape=Path SEA0| StrokeWidth 0 | Fill LinearGradient Gradient1
SEA0=[SEA0]
Gradient1=270|40,40,255;0|255,150,240;1
Shape2=Path SEA_18| StrokeWidth 2 | Fill Color 50,50,50,255
SEA_18=[SEA_18]
Shape3=Combine Shape|Exclude Shape2
UpdateDivider=-1

[�Űͱ���ʱ�����]
Meter=Shape
x=390
y=270
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
x=240
y=120
ImageName=#@#Image\3\DialPlate.png
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
x=240
y=124.2
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=StarHourAngle
ImageName=#@#Image\3\Zodiac_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Zodiac]
Meter=Rotator
x=240
y=120
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=StarHourAngle
ImageName=#@#Image\3\Zodiac.png
ValueRemainder=12000

[StarHand_shadow]
Meter=Rotator
x=240
y=124.2
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=StarHourAngle
ImageName=#@#Image\3\StarHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[StarHand]
Meter=Rotator
x=240
y=120
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=StarHourAngle
ImageName=#@#Image\3\StarHand.png
ValueRemainder=12000

[MoonHand_shadow]
Meter=Rotator
x=240
y=124.2
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=MoonHourAngle
ImageName=#@#Image\3\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Moon_shadow]
Meter=Image
x=(390+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))-11)
y=(270-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))-6.8)
ImageName=#@#Image\3\Moon_shadow.png
ImageAlpha=200
DynamicVariables=1

[MoonHand]
Meter=Rotator
x=240
y=120
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=MoonHourAngle
ImageName=#@#Image\3\SunMoonHand.png
ValueRemainder=12000

[FullMoon]
Meter=Image
x=(390+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))-11)
y=(270-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))-11)
ImageName=#@#Image\3\FullMoon.png
DynamicVariables=1

[Moon]
Meter=Shape
Shape=Ellipse (390+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))),(270-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))),11
DynamicVariables=1

[NewMoon]
Meter=Image
x=(390+[����λ�ð뾶]*Sin(Rad([������ʱ]*15))+22*[MoonPhase]*Cos(Rad([������ʱ]*15))-11)
y=(270-[����λ�ð뾶]*Cos(Rad([������ʱ]*15))+22*[MoonPhase]*Sin(Rad([������ʱ]*15))-11)
ImageName=#@#Image\3\NewMoon.png
Container=Moon
DynamicVariables=1

[SunHand_shadow]
Meter=Rotator
x=240
y=124.2
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=SunHourAngle
ImageName=#@#Image\3\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Sun_shadow]
Meter=Image
x=(390+[̫��λ�ð뾶]*Sin(Rad([��̫��ʱ]*15))-15)
y=(270-[̫��λ�ð뾶]*Cos(Rad([��̫��ʱ]*15))-10.8)
ImageName=#@#Image\3\Sun_shadow.png
ImageAlpha=200
DynamicVariables=1

[SunHand]
Meter=Rotator
x=240
y=120
w=300
h=300
OffSetX=150
OffSetY=150
MeasureName=SunHourAngle
ImageName=#@#Image\3\SunMoonHand.png
ValueRemainder=12000

[Sun]
Meter=Image
x=(390+[̫��λ�ð뾶]*Sin(Rad([��̫��ʱ]*15))-15)
y=(270-[̫��λ�ð뾶]*Cos(Rad([��̫��ʱ]*15))-15)
ImageName=#@#Image\3\Sun.png
DynamicVariables=1

[HandPedestal]
Meter=Image
x=380
y=260
ImageName=#@#Image\3\HandPedestal.png

[OffSet]
Measure=Calc
Formula=OffSet+1
UpdateDivider=1

[Circle]
Meter=Rotator
x=156
y=36
w=468
h=468
OffSetX=234
OffSetY=234
MeasureName=OffSet
ImageName=#@#Image\3\Circle.png
ValueRemainder=360
UpdateDivider=1

[hgContainer]
Meter=Shape
x=195
y=75
Shape=Rectangle 0,0,390,390 | Fill RadialGradient Gradient1 | StrokeWidth 0
Gradient1=0,0|0,0,0,255;0|0,0,0,255;0.9|0,0,0,0;1
UpdateDivider=-1

[huiguang1]
Meter=Image
x=([OffSet]%100-100)
ImageAlpha=(7*Abs(([OffSet]+50)%100-50))
ImageName=#@#Image\3\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1

[huiguang2]
Meter=Image
x=(([OffSet]+50)%100-100)
ImageAlpha=(7*Abs([OffSet]%100-50))
ImageName=#@#Image\3\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1