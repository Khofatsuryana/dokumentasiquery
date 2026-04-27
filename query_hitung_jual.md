# Query Hitung Jual

## Notes

| Parameter | Keterangan |
|-----------|------------|
| `ltgl1` | Awal bulan sekarang |
| `ltgl2` | Tanggal sekarang |
| `sgmstr` | Struktur: `DCOOAREA`, `M2WAM`, `KAWIL`, `MSOHEAD`, `PICMKTM2W` |
| `psikode` | NIP sesuai trans |

---

## 1. Hitung Jual Kirim

**Sumber Data:** Tabel `PIK`

### Query Contoh 1

```sql
SELECT *
FROM PIK
WHERE pikdata = 'DTPIU'
  AND pikcabpiu = cadkdcab
  AND piktglfak BETWEEN {ltgl1} AND {ltgl2}
  AND pikca = 'KR'
  AND piktypjl = 'K'
  AND pikdvs = 'M2W'
```

### Query Contoh 2

```sql
SELECT *
FROM PIK
WHERE pikdata = 'DTPIU'
  AND piksales = psikode
  AND piktglfak BETWEEN {ltgl1} AND {ltgl2}
  AND pikca = 'KR'
  AND piktypjl = 'K'
  AND pikdvs = 'M2W'
```

---

## 2. Hitung Jual PK (Join BTM)

**Sumber Data:** Tabel `PIK` join ke `BTM` index (`btmbukidx`) dengan `btmnobuk = piknobtm`

### Query Contoh 1

```sql
SELECT *
FROM PIK
LEFT JOIN BTM ON btmnobuk = piknobtm
WHERE pikdata = 'DTPIU'
  AND pikcabpiu = cadkdcab
  AND piktglfak BETWEEN {ltgl1} AND {ltgl2}
  AND pikca = 'KR'
  AND piktypjl = 'K'
  AND pikdvs = 'M2W'
```

### Query Contoh 2

```sql
SELECT *
FROM PIK
LEFT JOIN BTM ON btmnobuk = piknobtm
WHERE pikdata = 'DTPIU'
  AND piksales = psikode
  AND piktglfak BETWEEN {ltgl1} AND {ltgl2}
  AND pikca = 'KR'
  AND piktypjl = 'K'
  AND pikdvs = 'M2W'
```

---

## 3. Hitung Jual Rupiah (Join NHM)

**Sumber Data:** Tabel `PIK` join ke `NHM` index (`nhmdatbukidx`) dengan `nhmdata = 'BUKUTAMU'` dan `nhmnobuk = piknobtm`

### Query Contoh 1

```sql
SELECT *
FROM PIK
LEFT JOIN NHM ON nhmdata = 'BUKUTAMU' AND nhmnobuk = piknobtm
WHERE pikdata = 'DTPIU'
  AND pikcabpiu = cadkdcab
  AND piktglfak BETWEEN {ltgl1} AND {ltgl2}
  AND pikca = 'KR'
  AND piktypjl = 'K'
  AND pikdvs = 'M2W'
```

### Query Contoh 2

```sql
SELECT *
FROM PIK
LEFT JOIN NHM ON nhmdata = 'BUKUTAMU' AND nhmnobuk = piknobtm
WHERE pikdata = 'DTPIU'
  AND piksales = psikode
  AND piktglfak BETWEEN {ltgl1} AND {ltgl2}
  AND pikca = 'KR'
  AND piktypjl = 'K'
  AND pikdvs = 'M2W'
```
