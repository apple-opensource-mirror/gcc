! pr14836
       OPEN(UNIT=9, ACCESS='DIRECT', RECL=80, FORM='UNFORMATTED')
       INQUIRE(UNIT=9,NEXTREC=NREC)
       WRITE(UNIT=9,REC=5) 1
       INQUIRE(UNIT=9,NEXTREC=NREC)
!      PRINT*,NREC
       IF (NREC.NE.6) CALL ABORT
       READ(UNIT=9,REC=1) MVI
       INQUIRE(UNIT=9,NEXTREC=NREC)
       IF (NREC.NE.2) CALL ABORT
!      PRINT*,NREC
       END

