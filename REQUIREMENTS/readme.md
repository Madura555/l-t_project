# Requirements
## Introduction:
#### In this project an electrical transformer is designed and its corressponding losses are calculated for providing high efficiency.

# Research:
## What is a transformer:
#### A transformer is defined as a passive electrical device that transfers electrical energy from one circuit to another through the process of electromagnetic induction. It is most commonly used to increase (‘step up’) or decrease (‘step down’) voltage levels between circuits.

##  Main parts of a transformer:
#### 1.Primary Winding of Transformer
#### 2.Magnetic Core of Transformer
#### 3.Secondary Winding of Transformer

## Formula for calculating various parameters:
#### Secondary Volt-Amps = secondary voltage (Vs) * secondary current(Is)
#### Primary Volt-Amps   = Secondary Volt-Amps  / 0.9 (assuming efficiency of the transformer as 90%)
#### Primary voltage (Vp)= Secondary voltage(Vs)/ turns ratio(n2/n1)
#### Primary current (Ip) =  Primary Volt-Amps(PVA)/ Primary voltage(Vp)

## The require cross-sectional area of the core is given by:- 
#### Core area (CA) = 1.15 * sqrt (Primary Volt-amps(PVA))
#### Gross core area (GCA) = Core area(CA) * 1.1

## The number of turns on the winding is decided by the ratio given as:-
#### Turns per volt (Tpv) = 1/(4.44 * 10-4 * core area* frequency * flux density)

#### Primary turns (n1) = Turns per volt(Tpv) * Primary voltage(V1)
#### Secondary turns (n2) = Turns per volt(Tpv) * secondary voltage(V2) * 1.03 (Assume that there is 3% drop in transformer windings)

## Losses in transformer:
#### In any electrical machine, 'loss' can be defined as the difference between input power and output power. An electrical transformer is an static device, hence mechanical losses (like windage or friction losses) are absent in it. A transformer only consists of electrical losses (iron losses and copper losses).
## Core Losses Or Iron Losses
## Hysterisis Loss:
#### Wh= ηBmax1.6fV (watts)
####    where,   η = Steinmetz hysteresis constant
####             V = volume of the core in m3
## Copper loss: 
#### Copper loss for the primary winding is I12R1 and for secondary winding is I22R2

# 4W's and 1'H
## Who
#### Every grid connected system needs a transformer for step up and step down

## What
#### Transformers help improve safety and efficiency of power systems by raising and lowering voltage levels as and when needed. l

## When
#### It is needed all the time in power transmission network

## Where
#### In generation, transmission and distribution side

## How
#### Just give the input values and the transformer is designed
