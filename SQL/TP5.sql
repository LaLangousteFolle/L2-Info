SELECT COUNT(id_cd) FROM leader JOIN individu ON leader.id_musicien = id_ind GROUP BY id_musicien;
SELECT id_ind FROM individu GROUP BY id_ind HAVING COUNT(individu.id_ind) > (SELECT AVG(C) FROM (SELECT COUNT(id_cd) as C FROM leader JOIN individu ON leader.id_musicien = id_ind GROUP BY id_musicien) as table1);
SELECT annee_enr FROM enreg GROUP BY annee_enr HAVING COUNT(id_enr) >= ALL((SELECT COUNT(id_enr) from enreg GROUP BY annee_enr));
SELECT nom, prenom FROM individu HAVING id_ind = (SELECT id_musicien FROM interp JOIN COMPO USING(id_musicien));
SELECT nom, prenom FROM individu JOIN compo ON id_musicien = id_ind
