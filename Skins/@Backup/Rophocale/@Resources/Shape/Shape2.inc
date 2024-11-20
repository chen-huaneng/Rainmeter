[Variables]
r1=74
r2=24

[Wings]
Meter=Image
x=0
y=0
ImageName=#@#Image\2\Wings.png
UpdateDivider=-1

[DialPlate_back]
Meter=Image
x=160
y=80
ImageName=#@#Image\2\DialPlate_back.png
UpdateDivider=-1

[太阳高度角表盘]
Meter=Shape
x=260
y=180
Shape=Path SEA0| StrokeWidth 0 | Fill LinearGradient Gradient1
SEA0=[SEA0]
Gradient1=270|40,40,255;0|255,150,240;1
Shape2=Path SEA_18| StrokeWidth 2 | Fill Color 50,50,50,255
SEA_18=[SEA_18]
Shape3=Combine Shape|Exclude Shape2
UpdateDivider=-1

[古巴比伦时间表盘]
Meter=Shape
x=260
y=180
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
x=160
y=80
ImageName=#@#Image\2\DialPlate.png
UpdateDivider=-1

[StarHourAngle]
Measure=Calc
Formula=真恒星时*500

[MoonHourAngle]
Measure=Calc
Formula=真月球时*500

[SunHourAngle]
Measure=Calc
Formula=真太阳时*500

[MoonPhase]
Measure=Calc
Formula=(真月球时+36-真太阳时)%24/12-1

[Zodiac_shadow]
Meter=Rotator
x=160
y=82.8
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=StarHourAngle
ImageName=#@#Image\2\Zodiac_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Zodiac]
Meter=Rotator
x=160
y=80
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=StarHourAngle
ImageName=#@#Image\2\Zodiac.png
ValueRemainder=12000

[StarHand_shadow]
Meter=Rotator
x=160
y=82.8
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=StarHourAngle
ImageName=#@#Image\2\StarHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[StarHand]
Meter=Rotator
x=160
y=80
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=StarHourAngle
ImageName=#@#Image\2\StarHand.png
ValueRemainder=12000

[MoonHand_shadow]
Meter=Rotator
x=160
y=82.8
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=MoonHourAngle
ImageName=#@#Image\2\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Moon_shadow]
Meter=Image
x=(260+[月球位置半径]*Sin(Rad([真月球时]*15))-8)
y=(180-[月球位置半径]*Cos(Rad([真月球时]*15))-5.2)
ImageName=#@#Image\2\Moon_shadow.png
ImageAlpha=200
DynamicVariables=1

[MoonHand]
Meter=Rotator
x=160
y=80
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=MoonHourAngle
ImageName=#@#Image\2\SunMoonHand.png
ValueRemainder=12000

[FullMoon]
Meter=Image
x=(260+[月球位置半径]*Sin(Rad([真月球时]*15))-8)
y=(180-[月球位置半径]*Cos(Rad([真月球时]*15))-8)
ImageName=#@#Image\2\FullMoon.png
DynamicVariables=1

[Moon]
Meter=Shape
Shape=Ellipse (260+[月球位置半径]*Sin(Rad([真月球时]*15))),(180-[月球位置半径]*Cos(Rad([真月球时]*15))),8
DynamicVariables=1

[NewMoon]
Meter=Image
x=(260+[月球位置半径]*Sin(Rad([真月球时]*15))+16*[MoonPhase]*Cos(Rad([真月球时]*15))-8)
y=(180-[月球位置半径]*Cos(Rad([真月球时]*15))+16*[MoonPhase]*Sin(Rad([真月球时]*15))-8)
ImageName=#@#Image\2\NewMoon.png
Container=Moon
DynamicVariables=1

[SunHand_shadow]
Meter=Rotator
x=160
y=82.8
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=SunHourAngle
ImageName=#@#Image\2\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Sun_shadow]
Meter=Image
x=(260+[太阳位置半径]*Sin(Rad([真太阳时]*15))-10)
y=(180-[太阳位置半径]*Cos(Rad([真太阳时]*15))-7.2)
ImageName=#@#Image\2\Sun_shadow.png
ImageAlpha=200
DynamicVariables=1

[SunHand]
Meter=Rotator
x=160
y=80
w=200
h=200
OffSetX=100
OffSetY=100
MeasureName=SunHourAngle
ImageName=#@#Image\2\SunMoonHand.png
ValueRemainder=12000

[Sun]
Meter=Image
x=(260+[太阳位置半径]*Sin(Rad([真太阳时]*15))-10)
y=(180-[太阳位置半径]*Cos(Rad([真太阳时]*15))-10)
ImageName=#@#Image\2\Sun.png
DynamicVariables=1

[HandPedestal]
Meter=Image
x=252
y=172
ImageName=#@#Image\2\HandPedestal.png

[OffSet]
Measure=Calc
Formula=OffSet+1
UpdateDivider=1

[Circle]
Meter=Rotator
x=104
y=24
w=312
h=312
OffSetX=156
OffSetY=156
MeasureName=OffSet
ImageName=#@#Image\2\Circle.png
ValueRemainder=360
UpdateDivider=1

[hgContainer]
Meter=Shape
x=130
y=50
Shape=Rectangle 0,0,260,260 | Fill RadialGradient Gradient1 | StrokeWidth 0
Gradient1=0,0|0,0,0,255;0|0,0,0,255;0.9|0,0,0,0;1
UpdateDivider=-1

[huiguang1]
Meter=Image
x=([OffSet]%100-100)
ImageAlpha=(7*Abs(([OffSet]+50)%100-50))
ImageName=#@#Image\2\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1

[huiguang2]
Meter=Image
x=(([OffSet]+50)%100-100)
ImageAlpha=(7*Abs([OffSet]%100-50))
ImageName=#@#Image\2\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1